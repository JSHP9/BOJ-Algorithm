#include <iostream>
#include <vector>
#include <unordered_map>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, c;
    std::vector<int> cardN, cardM;
    cin >> n;
    for (size_t i = 0; i < n; ++i) {
        cin >> c;
        cardN.push_back(c);
    }
    
    cin >> m;
    for (size_t i = 0; i < m; ++i) {
        cin >> c;
        cardM.push_back(c);
    }

    std::unordered_map<int, int> cardMap;
    for (size_t i = 0; i < cardM.size(); ++i) {
        cardMap[cardM[i]] = 1;
    }

    for (auto c : cardN)
        if (cardMap[c])
            ++cardMap[c];

    for (const auto& c : cardM)
        cout << cardMap[c] - 1 << ' ';

    return 0;
}