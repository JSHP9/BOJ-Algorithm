#include <iostream>

using namespace std;

class year {
	int x;
public:
	void trans() {
		cin >> x;
		cout << x - 543;
	}
};

int main()
{
	year a;
	a.trans();

	return 0;
}