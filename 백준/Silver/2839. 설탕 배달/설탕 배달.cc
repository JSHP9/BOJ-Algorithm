#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false); // c, c++ 표준 입출력 동기화 해제
    cin.tie(NULL); // 입력과 출력 묶음 풀기
    int n, cnt = 0;
    cin >> n;
    int cpN = n; // n 복사본
    while (cpN) 
    {      

        if (cpN < 0 || cpN == 4) { // 정확하게 N킬로그램을 만들 수 없는경우
            cnt = -1;
            break;
        }
        // 무조건 3키로로 담아야 정확하게 담기는 경우
        if (cpN == 3 || cpN == 6 || cpN == 9 || cpN == 12) {
            cpN -= 3;
            cnt++;
        }
        else {
            cpN -= 5;
            cnt++;
        }
          
    }
    cout << cnt;
    return 0;
}