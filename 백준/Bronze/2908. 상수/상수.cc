#include <iostream>
#include <string>

using namespace std;

int main()
{
	string A, B;
	int a, b;

	cin >> A;
	cin >> B;
	a = stoi(A);
	b = stoi(B);

	int newA = 0, newB = 0 ,ans;

	while (a > 0) {
		newA = newA * 10 + a % 10;
		newB = newB * 10 + b % 10;

		a = a / 10;
		b = b / 10;
	}
	ans = (newA >= newB) ? newA : newB;
	cout << ans;
	return 0;
}