#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <unordered_map>

using std::cin, std::cout, std::vector, std::unordered_map;

int main() {
    // I/O 최적화
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> vec(n);
    unordered_map<int, int> freq; // 최빈값 찾기 위한 빈도수 맵
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        sum += vec[i];
        freq[vec[i]]++;  // 등장 횟수 증가
    }

    // 산술 평균
    int avg = round((double)sum / n);
    if (avg == 0) cout << 0 << '\n'; // -0을 0으로 출력하는 용도
    else cout << avg << '\n';

    // 중앙값
    std::sort(vec.begin(), vec.end());
    cout << vec[n / 2] << '\n';

    // 최빈값 계산
    int maxCnt = 0;
    vector<int> modes;
    for (const auto& [num, cnt] : freq) {
        if (cnt > maxCnt) {
            maxCnt = cnt;
            modes = {num}; // 최빈값 리스트 초기화
        } else if (cnt == maxCnt) {
            modes.push_back(num); // 최빈값 리스트에 등록
        }
    }

    std::sort(modes.begin(), modes.end()); // 최빈값 후보들 정렬
    if (modes.size() > 1) {
        cout << modes[1] << '\n'; // 두 번째로 작은 최빈값 출력
    } else {
        cout << modes[0] << '\n'; // 최빈값이 하나인 경우
    }

    // 범위
    cout << vec[n - 1] - vec[0] << '\n';

    return 0;
}
