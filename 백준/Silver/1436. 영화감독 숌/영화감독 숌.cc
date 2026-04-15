#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false); // c, c++ 표준 입출력 동기화 해제
    cin.tie(NULL); // 입력과 출력 묶음 풀기
    
    int n, end = 666, endCnt = 0;
    int endCp = end; // end값 복사본
    cin >> n;
    for (int i = 0; i < n; ++i) {
        while (endCp) {
            // 6이 연속되게 나오는지 확인
            if (endCp % 10 == 6 && (endCp/10) % 10 == 6 && ((endCp/10)/10) % 10 == 6) 
                endCnt = 3; // 6이 세개 이상이면 되므로 count = 3
            endCp /= 10;
        }
        
        if (endCnt < 3) --i; // 666이 안나오면 루프 한번 더 돌기
        
        // 값 초기화
        end++; 
        endCp = end;
        endCnt = 0;
    }
    cout << end - 1; // 마지막에 end값을 1 증가시키기 떄문에 1 감소
    return 0;
}