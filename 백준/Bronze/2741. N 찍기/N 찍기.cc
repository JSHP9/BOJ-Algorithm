#include <iostream>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cout << i << '\n';
    
    return 0;
}
