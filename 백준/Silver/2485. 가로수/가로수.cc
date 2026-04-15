#include <iostream>
#include <vector>
#include <numeric>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, num, cnt = 0;
    std::vector<int> len, st;

    cin >> n;
    for (size_t i = 0; i < n; ++i) {
        cin >> num;
        st.push_back(num);
    }

    // 가로수들 사이의 간격 구하기
    for (size_t i = 0; i < st.size() - 1; ++i)
        len.push_back(st[i + 1] - st[i]);

    // 가로수들의 간격의 최대공약수 구하기
    int distance = len[0];
    for (int i = 1; i < n-1; ++i) {
        distance = std::gcd(distance, len[i]);
    }
    
	// 가로수들 사이의 간격을 최대공약수로 나누어
	// 몇개를 추가로 심어야 하는지 구하기
	for (int i = 0; i < n - 1; ++i) {
		// 양끝에 이미 하나씩 심어져 있으므로 -1
		cnt += (len[i] / distance) - 1;	
	}

	cout << cnt;
    
    return 0;
}