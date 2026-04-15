#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout, std::cin;

bool comp(std::string s1, std::string s2);

int main() 
{
    int n;
    cin >> n;
    std::string word;
    std::vector<std::string> w;
    for (size_t i  = 0; i < n; ++i) {
        cin >> word;
        w.push_back(word);
    }

    sort(w.begin(), w.end(), comp);
    // unique: 중복된 요소제거(중복된 값을 앞으로 덮어쓴 후 뒤쪽 요소들을 무효화 함)
    // 즉, 원래 벡터의 끝에 중복된 값을 제거한 후의 유니크한 요소들이 모여있게됨
    // 제거된 요소를 벡터의 끝으로 밀어넣음 -> 무효화된 상태로 남아있음
    // 보통 erase랑 같이 씀
    
    // 방법 1
    w.erase(std::unique(w.begin(), w.end()), w.end()); 

    // 방법 2
    // auto it = std::unique(w.begin(), w.end());
    // w.erase(it, w.end());

    // for (size_t i =0; i < w.size(); ++i)
    //     cout << w[i] << '\n';
    for (const auto& word : w)
        cout << word << '\n';
    
    return 0;
}

bool comp(std::string s1, std::string s2)
{
    if (s1.length() == s2.length())
        return s1 < s2;
    else
        return s1.length() < s2.length();
}