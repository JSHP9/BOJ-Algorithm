#include <iostream>

using namespace std;

class Calculator {
	int x, y;
public:
	void calculator() {
		cin >> x >> y;
		cout << x + y << endl;
		cout << x - y << endl;
		cout << x * y << endl;
		cout << x / y << endl;
		cout << x % y << endl;
	}
};

int main()
{
	Calculator a;
	a.calculator();
	return 0;
}