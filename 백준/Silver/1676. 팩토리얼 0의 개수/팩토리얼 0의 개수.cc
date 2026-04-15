#include <iostream>

using std::cin, std::cout;

int main() 
{ 
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int cnt = 0;
    /*
    끝자리 0의 개수는 사실 2와 5의 쌍의 개수에 의해 결정됩니다.
    팩토리얼에서 2의 배수는 항상 5의 배수보다 많으므로, 
    5의 배수의 개수를 세는 것만으로 끝자리 0의 개수를 알 수 있습니다.
    */
    for (int i = 5; i <= n; i *= 5) {
        // 5의 배수만 계산하는 게 아니라, 5가 몇 번씩 곱해지는지를 모두 고려해야 하기 때문에  5의 거듭제곱까지 계산해야 함
        cnt += n / i;
    }

    cout << cnt;
}
