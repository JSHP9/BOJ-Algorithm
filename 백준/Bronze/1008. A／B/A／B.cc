#include <iostream>

using namespace std;

class Sum {
	double x, y;
public:
	void add() {
		cout << fixed;
		cout.precision(9);
		cin >> x >> y;
		cout << x / y;
	}
};

int main()
{
	Sum a;
	a.add();
	return 0;
}