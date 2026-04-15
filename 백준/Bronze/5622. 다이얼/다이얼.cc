#include <iostream>
#include <string>

using namespace std;

int main()
{
	string num;

	getline(cin, num);
	int sec = 0;
	for (int i = 0; i < num.length(); i++) {
			if (num[i] < 'D')
				sec += 3; // 2
			else if (num[i] < 'G')
				sec += 4; // 3
			else if (num[i] < 'J')
				sec += 5; // 4
			else if (num[i] < 'M')
				sec += 6; // 5
			else if (num[i] < 'P')
				sec += 7; // 6
			else if (num[i] < 'T')
				sec += 8; // 7
			else if (num[i] < 'W')
				sec += 9; // 8
			else
				sec += 10;

	}

	cout << sec;

	return 0;
}