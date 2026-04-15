#include <iostream>
#include <string>
using namespace std;

int main()
{
	string w;
	getline(cin, w);
	int len = w.length();
	for (int i = 0; i < len; i++) {
		if (w[i] != w[len - 1 - i]) {
			cout << 0;
			return 0;
		}
	}
	cout << 1;
	return 0;
}