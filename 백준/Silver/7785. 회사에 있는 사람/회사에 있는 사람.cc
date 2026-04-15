#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::string name, commute;
    cin >> n;
    std::vector<std::string> vStaff;
    std::unordered_map<std::string, std::string> staff;
    
    for (size_t i = 0; i < n; ++i) {
        cin >> name >> commute;
        vStaff.push_back(name);
        staff[vStaff[i]] = commute;
    }
    sort(vStaff.begin(), vStaff.end(), std::greater<>());
    vStaff.erase(unique(vStaff.begin(), vStaff.end()), vStaff.end());

    for (const auto& v : vStaff) {
        if (staff[v] == "enter")
            cout << v << '\n';
            
    }

    
    return 0;
}
