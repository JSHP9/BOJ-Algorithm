#include <iostream>
#include <string>
#include <cctype>  // isdigit을 사용하기 위해 필요

using std::cout, std::cin;

bool isNumber(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            return false;  // 숫자가 아니면 false 반환
        }
    }
    return true;  // 모든 문자가 숫자이면 true 반환
}

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    std::string input;
    int num = 0, cnt = 0;
    for (int i = 3; i > 0; --i) {
        cin >> input;

        // 숫자일 경우만 처리
        if (isNumber(input)) {
            num = std::stoi(input);
            cnt = i;
            break;  // 숫자를 찾으면 반복문 종료
        }
    }

    int n = num + cnt;
    if (n % 3 == 0 && n % 5 == 0)
        cout << "FizzBuzz";
    else if (n % 3 == 0)
        cout << "Fizz";
    else if (n % 5 == 0)
        cout << "Buzz";
    else
        cout << n;
}
