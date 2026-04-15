#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, age;
    cin >> n;
    std::string name;
    std::vector<std::pair<int, std::string>> member;

    for (size_t i = 0; i < n; ++i) {
        cin >> age >> name;
        member.push_back({age, name});
    }

    stable_sort(member.begin(), member.end(), [](auto a, auto b){
        return a.first < b.first;
    });

    for (const auto& mem : member)
        cout << mem.first << ' ' << mem.second << '\n';
    
    return 0;
}