#include <iostream>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    while (true) {
        cin >> a >> b >> c;
        
        if (a == 0 && b == 0 && c == 0)
            break;
        int m = (a >= b) ? a : b;
        int max = (m > c) ? m : c;

        if (max*max == (a*a + b*b + c*c) - max*max)
            cout << "right\n";
        else 
            cout << "wrong\n";
    }
    return 0;
}