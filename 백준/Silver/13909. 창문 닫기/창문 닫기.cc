#include <iostream>
#include <cmath>
using std::cout, std::cin;

void openWindows(int n);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    cin >> n;
    openWindows(n); 
    
    return 0;
}

// 약수의 개수가 홀수인 경우에만 창문이 열림 
// ex)12의 약수는 1, 2, 3, 4, 6, 12 총 여섯번 열고 닫힘 즉, 짝수는 닫힘
// 따라서 약수의 개수가 홀수인 창문만 열리게 되어있는데, 
// 완전 제곱수는 항상 홀수 개의 가짐 {중간에 대칭이 깨지기 때문 ex) 16 = 1,2,3,4,6,12로 4가 중복}
// ex) 1제곱, 2제곱 3제곱, ...., k제곱 <= n제곱
// 즉 k = sqrt(n)인 k의 값이 열린 창문 개수와 동일함
void openWindows(int n) 
{
    // static_cast: 명시적인 형 변환을 수행하는 c++ 연산자
    // 기본 타입 간의 변환, 열거형 변환, 업캐스팅등에서 사용
    
    int cnt = static_cast<int>(sqrt(n)); //<int>: double을 int로 변환
    cout << cnt;
}
