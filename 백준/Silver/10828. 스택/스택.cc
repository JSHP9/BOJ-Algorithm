#include <iostream>
#include <stack>

using std::cin, std::cout, std::stack;

int main() {
    // I/O 최적화
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num;
    std::string query;
    stack<int> s;

    cin >> n;
    while (n--) {
        cin >> query;
        if (query == "push") {
            cin >> num;
            s.push(num);
        }
        else if (query == "pop") {
            if (!s.empty()) {
                cout << s.top() << '\n';
                s.pop();
            } else {
                cout << -1 << '\n';
            }
        }
        else if (query == "size") {
            cout << s.size() << '\n';
        }
        else if (query == "empty") {
            cout << (s.empty() ? 1 : 0) << '\n';
        }
        else if (query == "top") {
            if (!s.empty()) {
                cout << s.top() << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}
