#include <iostream>
#include <string>

using namespace std;

int main()
{
	string w;
	int count = 0;
	getline(cin, w);

	if (w[0] == ' ')
		count--;
	if (w[w.length() - 1] = ' ')
		count--;

	for (int i = 0; i < w.length(); i++) {
		if (w[i] == ' ') {
			count++;
		}
	}
	cout << count + 1 << endl;
	return 0;
}