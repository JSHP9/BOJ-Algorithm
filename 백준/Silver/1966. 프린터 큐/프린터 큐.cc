#include <iostream>
#include <queue>

using std::cin, std::cout;

int main() {
    // I/O 최적화
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;
    cin >> c;

    while (c--) {
        int n, m, q;
        cin >> n >> m;

        std::queue<std::pair<int, int>> que;  // 매번 초기화
        std::priority_queue<int> pq;         // 매번 초기화

        for (int i = 0; i < n; ++i) {
            cin >> q;
            que.push({q, i}); // 원소, 몇 번째 원소인지
            pq.push(q);
        }

        int cnt = 1;
        while (true) {
            int e = que.front().first;
            int nth = que.front().second;
            if (e != pq.top()) {
                que.push({e, nth});
                que.pop();
            } else {
                if (nth == m) break;
                else {
                    que.pop();
                    pq.pop();
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }

    return 0;
}
