#include <iostream>
#include <numeric>

using std::cout, std::cin;

// int gcd(int a, int b);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    int a, b;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        // 방법 1
        // int lcm = (a * b) / gcd(a, b);
        // cout << lcm << '\n';
        
        // 방법 2
        cout << std::lcm(a, b) << '\n';
    }
    
    return 0;
}

// int gcd(int a, int b) 
// {
//     if (a == 0)
//         return b;
    
//     return gcd(b % a, a);
// }