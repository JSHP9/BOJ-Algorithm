#include <iostream>
#include <cmath>

using std::cout, std::cin;

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long r = 31, m = 1234567891;
    long long l, sum = 0;
    std::string str;
    
    cin >> l;
    cin >> str;

    for (int i = 0; i < l; ++i) {
        // a가 97이기 떄문에 96 빼줌
        sum += (str[i] - 96) * pow(r, i);
    }

    cout << sum % m;
    
}