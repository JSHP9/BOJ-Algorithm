#include <iostream>

using std::cout, std::cin;

int gcd(int n, int m);
int lcm(int n, int m);

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;
    int g = gcd(n, m);
    int l = lcm(n ,m);
    cout << g << '\n' << l;
    
}

int gcd(int a, int b) {
    int c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int lcm(int n, int m)
{
    return n * m / gcd(n, m);
}