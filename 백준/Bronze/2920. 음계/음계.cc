#include <iostream>

using std::cout, std::cin;

bool ascending(int n[]);
bool descending(int n[]);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n[9] = { 0 };
    for (int i = 1; i <= 8; ++i)
        cin >> n[i];

    if (ascending(n))
        cout << "ascending";
    else if (descending(n))
        cout << "descending";
    else
        cout << "mixed";
    
    return 0;
}

bool ascending(int n[])
{
    for (int i = 1; i <= 8; ++i) {
        if (n[i] != i)
            return false;
    }
    return true;
}

bool descending(int n[])
{
    int check = 8;
    for (int i = 1; i <= 8; ++i) {
        if (n[i] != check)
            return false;
        --check;
    }
    return true;
}