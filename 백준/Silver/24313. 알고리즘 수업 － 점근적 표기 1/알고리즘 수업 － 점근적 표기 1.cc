#include <iostream>

using namespace std;

int main() 
{
    int a1, a0, c, n0;
    int n = 0;
    cin >> a1 >> a0;
    cin >> c;
    cin >> n0;
    
    while (n0 > n)
        n++;

    if (a1*n + a0 <= c*n && a1 <= c)
        cout << 1;
    else 
        cout << 0;
    
    return 0;
}