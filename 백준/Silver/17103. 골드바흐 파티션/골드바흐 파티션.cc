#include <iostream>

#include <vector>

using std::cout, std::cin;

// 에라토스테네스의 체

std::vector<int> sieveOfEratosthenes(int n) {

    std::vector<bool> isPrime(n + 1, true);

    std::vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; ++i) {

        if (isPrime[i]) {

            for (int j = i * i; j <= n; j += i) {

                isPrime[j] = false;

            }

        }

    }

    for (int i = 2; i <= n; ++i) {

        if (isPrime[i]) {

            primes.push_back(i);

        }

    }

    return primes;

}

int countPrimePairs(int n, const std::vector<int>& primes) {

    int cnt = 0;

    int left = 0, right = primes.size() - 1;

    // 투 포인터 방식으로 소수의 합을 찾음

    while (left <= right) {

        int sum = primes[left] + primes[right];

        if (sum == n) {

            ++cnt;

            ++left;

            --right;

        } else if (sum < n) {

            ++left;

        } else {

            --right;

        }

    }

    return cnt;

}

int main() {

    std::ios::sync_with_stdio(false);

    std::cin.tie(NULL);

    std::cout.tie(NULL);

    int t, maxN = 0;

    cin >> t;

    std::vector<int> testCases(t);

    for (int i = 0; i < t; ++i) {

        cin >> testCases[i];

        if (testCases[i] > maxN) {

            maxN = testCases[i];

        }

    }

    // 가장 큰 n에 대해 한 번만 소수를 계산

    std::vector<int> primes = sieveOfEratosthenes(maxN);

    for (int n : testCases) {

        if (n == 1) {

            cout << 0 << '\n';

            continue;

        }

        cout << countPrimePairs(n, primes) << '\n';

    }

    return 0;

}