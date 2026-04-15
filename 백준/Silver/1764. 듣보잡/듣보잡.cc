#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::string name;
    std::vector<std::string> nameH, nameS;
    cin >> n >> m;
    for (size_t i = 0; i < n; ++i) {
        cin >> name;
        nameH.push_back(name);
    }
    for (size_t i = 0; i < m; ++i) {
        cin >> name;     
        nameS.push_back(name);
    }

    sort(nameH.begin(), nameH.end(), std::less<>());
    
    std::unordered_map<std::string, int> nameMap;
    for (size_t i = 0; i < m; ++i)
        nameMap[nameS[i]] = 1;

    int cnt = 0;
    for (const auto& n : nameH) 
        if (nameMap[n])
            ++cnt;

    cout << cnt << '\n';
    
    for (const auto& n : nameH) 
        if (nameMap[n])
            cout << n << '\n';

    return 0;
}