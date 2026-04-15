#include <iostream>

using namespace std;

class Calculator {
	long long a, b, c;
public:
	void Calc() {
		cin >> a >> b >> c;
		cout << a + b + c;
	}
};

int main()
{
	Calculator a;
	a.Calc();

	return 0;
}