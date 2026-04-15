#include <iostream>

// long long 사용을 위해 stdint 헤더 포함 또는 그냥 long long 사용
#include <stdint.h> // int64_t 등을 위해 (선택 사항)

using namespace std;

// 배열과 변수 타입을 long long으로 변경
long long len[10001]; // 크기도 약간 여유있게
int k;
long long n; // n도 long long으로 받는 것이 안전

// 함수 파라미터와 내부 변수도 long long으로 변경
void binary_search_create(long long right) // right도 long long
{
    long long div, mid; // mid, div도 long long
    long long left = 1, ans = 0; // ans는 0으로 초기화 (long long)

    while (left <= right) {
        // 오버플로우 방지 mid 계산 (long long)
        mid = left + (right - left) / 2;
        div = 0; // div 초기화 (long long)

        // mid가 0이면 무한 루프 또는 런타임 에러 발생 가능, 방지
        if (mid == 0) {
             // left가 1부터 시작하면 mid는 0이 될 수 없지만 안전을 위해
             break;
        }

        // 총 랜선 개수 계산
        for (int i = 0; i < k; ++i) {
            div += (len[i] / mid); // len도 long long 가정
        }

        // *** 수정된 핵심 로직 ***
        if (div >= n) {
            // N개 이상 만들 수 있다 -> 현재 mid는 가능한 답
            // 답을 저장하고, 더 긴 길이가 가능한지 탐색
            ans = mid;       // <<<--- 이 부분이 중요! 가능한 답을 ans에 저장
            left = mid + 1;  // 더 큰 쪽(오른쪽) 탐색
        } else {
            // N개 이상 만들 수 없다 -> 현재 mid는 너무 길다
            // 더 짧은 길이를 탐색
            right = mid - 1; // <<<--- right = mid - 1 로 변경 (표준적)
        }
    }

    // <<<--- 루프 후의 잘못된 for 루프 전체 삭제 --->>>
    /*
    for (int i = 0; i < k; ++i) {
        // ... (삭제) ...
    }
    */

    // while 루프가 끝나면 ans에 최대 길이가 저장되어 있음
    cout << ans << "\n"; // 결과 출력 (줄바꿈 추가 권장)
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    long long max_len = 0; // max 값도 long long으로
    cin >> k >> n; // k는 int, n은 long long

    for (int i = 0; i < k; ++i) {
        cin >> len[i]; // len 배열에 long long으로 입력 받음
        if (max_len < len[i])
            max_len = len[i];
    }

    // long long 타입의 max_len을 함수에 전달
    binary_search_create(max_len);

    return 0;
}