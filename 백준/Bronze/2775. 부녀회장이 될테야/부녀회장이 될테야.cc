#include <iostream>

using std::cout, std::cin;

int home(int k, int n);

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, k, n;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> k >> n;
        if (k == 0)
            cout << n << '\n';
        else {
            cout << home(k, n) << '\n';
        }
    }
}
// k층에 n호
/*
   2층 1 4 10 20 35
   1층 1 3 6 10 15 
   0층 1 2 3 4 5 이므로 
    ex) 1층에 2호(3) = 1층에 1호(1) + 0층에 2호(2)
*/
int home(int k, int n) 
{
    if (n == 1)
        return 1;
    if (k == 0)
        return n;
    else
        return home(k, n - 1) + home(k - 1, n);
}