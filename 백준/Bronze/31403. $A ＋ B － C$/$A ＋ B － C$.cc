#include <iostream>
#include <string>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::string a, b, c;
    int n[3] = {0};
    for (int i = 0; i < 3; ++i)
        cin >> n[i];

    cout << n[0] + n[1] - n[2] << '\n';

    a = std::to_string(n[0]);
    b = std::to_string(n[1]);
    c = a + b;
    int i = stoi(c);
    
    cout << i - n[2];
    
    return 0;
}
