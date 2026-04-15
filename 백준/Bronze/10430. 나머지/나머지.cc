#include <iostream>

using namespace std;

class Calculator {
	int a, b, c;
public:
	void Calc() {
		cin >> a >> b >> c;
		cout << (a + b) % c << endl;
		cout << ((a % c) + (b % c)) % c << endl;
		cout << (a * b) % c << endl;
		cout << ((a % c) * (b % c)) % c << endl;
	}
};

int main()
{
	Calculator a;
	a.Calc();

	return 0;
}