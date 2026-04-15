#include <iostream>
#include <queue>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

 	std::queue<int> Q;
	std::string command;
	int t, cnt;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> command;
		
		if (command == "push") {
			cin >> cnt;
			Q.push(cnt);
		}
		else if (command== "pop") {
			if (Q.empty()) {
				cout << "-1" << '\n';
			} else {
				cout << Q.front() << '\n';
				Q.pop();
			}
		}
		else if (command == "front") {
			if (Q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << Q.front() << '\n';
			}
		}
		else if (command == "back") {
			if (Q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << Q.back() << '\n';
			}
		}
		else if (command == "size")
			cout << Q.size() << '\n';
		else if (command == "empty")
			cout << Q.empty() << '\n';
		else if (command == "top") {
			if (Q.empty()) {
				cout << "-1" << '\n';
			}
			else {
				cout << Q.front() << '\n';
			}
		}
	}
    return 0;
}
