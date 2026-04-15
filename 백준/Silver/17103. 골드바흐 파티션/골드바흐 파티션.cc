#include <iostream>
#include <vector>

using std::cout, std::cin;

// 에라토스테네스의 체
std::vector<int> sieveOfEratosthenes(int n);
// 소수 합 찾기
int countPrimePairs(int n, std::vector<int> primes);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t, maxN = 0;
    cin >> t;
    std::vector<int> testCases(t);
    for (size_t i = 0; i < t; ++i) {
        cin >> testCases[i];
        // 가장 큰 N을 구함
        if (maxN < testCases[i])
            maxN = testCases[i];
    }

    // 가장 큰 N에 대해 한번만 소수 계산
    std::vector<int> primes = sieveOfEratosthenes(maxN);
    for (int n : testCases) {
        if (n == 1) {
            cout << 0 << '\n';
            continue;
        }
        // (숫자 n, 소수 모음집)
        cout << countPrimePairs(n, primes) << '\n';
    }
    
    return 0;
}

// 에라토스테네스의 체
std::vector<int> sieveOfEratosthenes(int n) 
{
    std::vector<bool> isPrime(n + 1, true);
    std::vector<int> primes;

    isPrime[0] = isPrime[1] = false;
    for (size_t i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (size_t j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    for (size_t i = 2; i < n; ++i) 
        if(isPrime[i])
            primes.push_back(i);

    return primes;
}

int countPrimePairs(int n, std::vector<int> primes) 
{
    int cnt = 0;
    int left = 0, right = primes.size() - 1;
    while (left <= right) {
        // 투 포인터 방식으로 소수의 합을 찾음
        int sum = primes[left] + primes[right];
        if (n == sum) {
            ++cnt;
            ++left;
            --right;
        }
        else if (n < sum) {
            --right;
        }
        else {
            ++left;
        }
    }
    return cnt;
}