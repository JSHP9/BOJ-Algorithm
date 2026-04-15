#include <iostream>

using namespace std;

class Calculator {
	int a, b;
public:
	void Calc() {
		cin >> a >> b;
		cout << a * (b % 10) << endl;
		cout << a * ((b / 10) % 10) << endl;
		cout << a * (b / 100) << endl;
		cout << a * b << endl;
	}
};

int main()
{
	Calculator a;
	a.Calc();

	return 0;
}