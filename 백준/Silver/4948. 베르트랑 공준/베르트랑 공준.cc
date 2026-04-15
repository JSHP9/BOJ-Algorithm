#include <iostream>

using std::cout, std::cin;

// 에라토스테네스의 체 (m부터 n까지의 범위가 정해졌을때 소수 찾기에 유용)
void sieveOfEratosthenes(int m, int n);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    while (true) {
        cin >> n;
        
        if (!n)
            break;
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        sieveOfEratosthenes(n, n * 2);
    }
    
    return 0;
}

void sieveOfEratosthenes(int m, int n)
{
    int cnt = 0;
    int prime[n + 1] = { 0 };
    for (int i = 2; i <= n; ++i) 
        prime[i] = i;

    for (int i = 2; i <= n; ++i) {
        if (prime[i] == 0)
            continue;
        
        for (int j = 2 * i; j <= n; j += i) // m을 제외한 m의 배수들을 전부 지움 (m부터 n까지)
            prime[j] = 0;
    }

    for(int i = m + 1; i <= n; ++i) {
        if(prime[i] != 0) 
            ++cnt;
    }
    cout << cnt << '\n';
}