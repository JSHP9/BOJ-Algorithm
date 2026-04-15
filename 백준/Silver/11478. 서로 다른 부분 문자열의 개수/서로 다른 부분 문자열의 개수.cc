#include <iostream>

#include <set>

#include <string>

using std::cout, std::cin, std::string;

int main() 

{

    std::ios::sync_with_stdio(false);

    cin.tie(NULL);

    string s;

    cin >> s;

    

    std::set<string> substrings;

    // 모든 부분 문자열을 set에 추가

    for (size_t i = 0; i < s.length(); ++i) {

        string temp = "";

        for (size_t j = i; j < s.length(); ++j) {

            temp += s[j];

            substrings.insert(temp);

        }

    }

    // 결과 출력

    cout << substrings.size();

    return 0;

}