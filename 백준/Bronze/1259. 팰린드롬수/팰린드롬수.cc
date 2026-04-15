#include <iostream>
#include <string>

using std::cout, std::cin;

int palindrome(int n);

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    while (true) {
        cin >> n;
        if (n == 0)
            break;
        palindrome(n);
    }
    
}

int palindrome(int n)
{
    std::string std;
    std = std::to_string(n);
    int len = std.length();
    for (int i = 0; i < len / 2; ++i) {
        if (std[i] != std[len -1 - i]) {
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";
    return 0;
}