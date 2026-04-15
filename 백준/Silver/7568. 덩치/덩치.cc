#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout;

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, x, y;
    std::vector<std::pair<int, int>> body;
    
    cin >> n;
    for (size_t i = 0; i < n; ++i)  {
        cin >> x >> y;
        body.push_back({x, y});
    }

    for (size_t i = 0; i < body.size(); ++i) {
        int cnt = 1;
        for (size_t j = 0; j < body.size(); ++j) {
            // 본인이 더 작으면 순위가 올라감(안좋은거)
            if (body[i].first < body[j].first && body[i].second < body[j].second)
            ++cnt;
        }
            cout << cnt << " ";
    }
    
}
