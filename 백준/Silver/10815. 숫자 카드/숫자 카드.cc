#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m, card;
    std::vector<int> cardN, cardM;
    cin >> n;
    for (size_t i = 0; i < n; ++i) {
        cin >> card;
        cardN.push_back(card);
    }
    cin >> m;
    for (size_t i = 0; i < m; ++i) {
        cin >> card;
        cardM.push_back(card);
    }
    
    // 값 -> 순위 매핑
    std::unordered_map<int, int> cardMap;
    for (size_t i = 0; i < cardN.size(); ++i) {
        cardMap[cardN[i]] = 1;
    }

    for (const auto& card : cardM) {
        if (cardMap[card] == 1) 
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }
    
    return 0;
}