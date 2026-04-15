#include <iostream>

using namespace std;

class Sum {
	int x, y;
public:
	void add() {
		cin >> x >> y;
		cout << x + y;
	}
};

int main()
{
	Sum a;
	a.add();
	return 0;
}