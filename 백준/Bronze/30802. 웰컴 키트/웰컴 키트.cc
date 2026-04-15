#include <iostream>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int i, j;
    int shirt_size[7];
    int n, t, p;
	cin >> n;

	for(i = 1; i <= 6; i++)
		cin >> shirt_size[i];

	cin >> t >> p;
	int t_shirt = 0;

	for(i = 1; i <= 6; i++){
		t_shirt += (shirt_size[i] + t - 1) / t; // 최적화를 한 부분 3 + 5 - 1 / 5 = 7 /5 = 1
	}

	cout << t_shirt << '\n';
	cout << n / p << ' ' << n % p << '\n';
    
    return 0;
}