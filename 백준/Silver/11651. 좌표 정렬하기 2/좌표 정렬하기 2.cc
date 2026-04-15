#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::endl;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, x, y;
    cin >> n;
    std::vector<std::pair<int, int>> posXY;

    for (size_t i = 0; i < n; ++i) {
        cin >> x >> y;
        posXY.push_back({x, y});
    }

    sort(posXY.begin(), posXY.end(), [](std::pair<int, int>& a, std::pair<int, int>& b) { // 람다함수
        if (a.second == b.second)
            return std::less<int>()(a.first, b.first); // std::less<>()는 두 값을 비교했을때 첫번째가 더 작으면 true
        return std::less<int>()(a.second, b.second);
    });
    
    for (size_t i = 0; i < posXY.size(); ++i)
        cout << posXY[i].first <<' ' << posXY[i].second << '\n';
    
    return 0;
}