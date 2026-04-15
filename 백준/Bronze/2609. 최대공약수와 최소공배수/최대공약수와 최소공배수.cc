#include <iostream>
#include <numeric>
#include <algorithm>

using std::cout, std::cin;

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;    
    cout << std::gcd(n, m) << '\n' << std::lcm(n, m);    
}