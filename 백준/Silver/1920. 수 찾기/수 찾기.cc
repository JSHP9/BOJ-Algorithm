#include <iostream>
#include <vector>
#include <algorithm> // for std::sort, std::binary_search

using std::cin, std::cout, std::vector;

int main() {
    // I/O 최적화
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int M;
    cin >> M;
    vector<int> queries(M);
    for (int i = 0; i < M; ++i) {
        cin >> queries[i];
    }

    // A 정렬
    std::sort(A.begin(), A.end());

    // 각 쿼리에 대해 이분 탐색 수행
    for (int query : queries) {
        // binary_search: 이분 탐색을 제공하는 함수
        if (std::binary_search(A.begin(), A.end(), query)) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}

/*
이분 탐색의 기본 원리
데이터는 반드시 정렬되어 있어야 함
정렬되지 않은 상태에서는 이분 탐색이 불가능함

가운데 값을 기준으로 판단:
찾고 싶은 값이 가운데 값보다 작으면 왼쪽만 검색.
크면 오른쪽만 검색.
매번 절반씩 줄여나감.
*/
