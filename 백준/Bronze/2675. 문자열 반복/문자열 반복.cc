#include <iostream>
#include <string>

using namespace std;

int main()
{
	string S, P;
	int R, T, cnt = 0;
	cin >> T;

	for (int i = 0; i < T; i++) {


		cin >> R;
		cin >> S;

		for (int j = 0; j < S.length(); j++) {
			P.append(R, S[j]);
		}

		cout << P << endl;
		P.clear();
	}

	return 0;
}