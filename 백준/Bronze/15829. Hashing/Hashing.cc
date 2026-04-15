#include <iostream>
#include <cmath>

using std::cout, std::cin;

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long r = 1, m = 1234567891;
    long long l, sum = 0;
    std::string str;
    
    cin >> l;
    cin >> str;

    for (int i = 0; i < l; ++i) {
        // a가 97이기 떄문에 96 빼줌
        sum += ((long(str[i]) - 96) * r) % m;
        // m이 있는 이유는 자료형의 범위(1234567891)를 넘어가는 값을 다시 초기화시켜주기 위함
        r = (r * 31) % m;
    }

    cout << sum % m;
    
}