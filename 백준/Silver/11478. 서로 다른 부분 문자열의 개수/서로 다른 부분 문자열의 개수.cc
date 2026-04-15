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

    // 중복 허용안되는 벡터 같은거, 삽입할때 자동으로 정렬도 해줌
    std::set<string> substrings;

    // 모든 부분 문자열을 set에 추가
    for (size_t i = 0; i < s.length(); ++i) {
        // temp 초기화
        string temp = "";

        for (size_t j = i; j < s.length(); ++j) {

            temp += s[j];
            substrings.insert(temp);
        }

    }

    cout << substrings.size();

    return 0;

}