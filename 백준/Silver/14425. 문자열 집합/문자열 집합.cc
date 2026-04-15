#include <iostream>
#include <vector>
#include <unordered_map>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m, cnt = 0;
    std::string s;
    std::vector<std::string> stringSet, stringM;
    cin >> n >> m;
    for (size_t i = 0; i < n; ++i) {
        cin >> s;
        stringSet.push_back(s);
    }

    for (size_t i = 0; i < m; ++i) {
        cin >> s;
        stringM.push_back(s);
    }

    std::unordered_map<std::string, int> sMap;
    for (size_t i = 0; i < stringSet.size(); ++i) {
        sMap[stringSet[i]] = 1;
    }

    for (const auto& set : stringM) {
        if (sMap[set] == 1)
            ++cnt;
    }

    cout << cnt;
    
    return 0;
}