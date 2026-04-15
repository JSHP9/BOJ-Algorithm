#include <iostream>

using std::cout, std::cin;

int factorial(int n);
void nck(int n, int k);

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;
    if (n == k || k == 0)
        cout << 1;
    else
        nck(n, k);
}

int factorial(int n)
{
    int pro = 1;
    for (int i = 2; i <= n; ++i)
        pro *= i;
    return pro;
}

void nck(int n, int k)
{
    int n1 = factorial(n);
    int k1 = factorial(k);
    int nk = factorial(n - k);
    cout << n1 / (nk * k1);
}