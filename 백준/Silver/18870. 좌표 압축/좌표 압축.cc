#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, x, cnt = 0;
    cin >> n;
    std::vector<int> pos, posComp;
    
    for (size_t i = 0; i < n; ++i) {
        cin >> x;
        pos.push_back(x);
        posComp.push_back(x);
    }
    
    sort(posComp.begin(), posComp.end());
    // unique는 연속된 중복 요소만 제거할 수 있음
    posComp.erase(std::unique(posComp.begin(), posComp.end()), posComp.end());

    // 값 -> 순위 매핑
    std::unordered_map<int, int> rankMap;
    for (size_t i = 0; i < posComp.size(); ++i) {
        // posComp의 값에 대해 0부터 순위를 할당
        // ex) posComp[0] = 999이면 rankMap[999] = 0
        // ex) posComp[1] = 1000이면 rankMap[1000] = 1
        rankMap[posComp[i]] = i;
    }

    for (int value : pos) {
        // rankMap[999] = 0, rankMap[1000] = 1
        cout << rankMap[value] << ' ';
    }
    
    return 0;
}

