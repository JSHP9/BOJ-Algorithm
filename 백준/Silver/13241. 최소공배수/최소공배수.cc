#include <iostream>
#include <numeric>

using std::cout, std::cin;

long long int gcd(int a, int b);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    long long int a, b;
    cin >> a >> b;
    
    // 방법 1
    long long int lcm = (a * b) / gcd(a, b);
    cout << lcm;
    
    // 방법 2
    //cout << std::lcm(a, b);
    
    return 0;
}

long long int gcd(int a, int b) 
{
    if (a == 0)
        return b;
    
    return gcd(b % a, a);
}