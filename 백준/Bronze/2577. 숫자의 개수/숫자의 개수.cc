#include <iostream>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, prod = 1;
    int num[10] = { 0 };
    for (int i = 0; i < 3; ++i) {
        cin >> n;
        prod *= n;
    }

    while (prod) {
        ++num[prod % 10];
        prod /= 10;
    }

    for (int i = 0; i < 10; ++i) {
        cout << num[i] << '\n';
    }
    
    return 0;
}
