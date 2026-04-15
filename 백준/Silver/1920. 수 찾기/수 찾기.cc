#include <iostream>
#include <unordered_set>

using std::cin, std::cout, std::unordered_set;

int main() {
    // I/O 최적화
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력
    int N;
    cin >> N;
    //  정렬된 상태가 필요 없다고 생각할 때 사용함 vector보다 빠름
    // unordered_set은 o(1), vector는 o(N)임
    // 값을 빠르게 찾고자 할 때 매우 효율적인 자료구조
    unordered_set<int> A;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        A.insert(x);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; ++i) {
        int query;
        cin >> query;
        if (A.count(query)) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}
