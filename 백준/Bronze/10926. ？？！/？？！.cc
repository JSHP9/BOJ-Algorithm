#include <iostream>
#include <string>

using namespace std;

class site {
	string x;
public:
	void id() {
		cin >> x;
		cout << x << "??!";
	}
};

int main()
{
	site a;
	a.id();

	return 0;
}