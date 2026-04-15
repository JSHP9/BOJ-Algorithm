#include <iostream>
#include <queue>

using std::cin, std::cout, std::queue;

int main() 
{
    // I/O 최적화
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, num;
    std::string query;
    queue<int> q;

    cin >> n;
    while (n--) {
        cin >> query;
        if (query == "push") {
            cin >> num;
            q.push(num);
        }
        else if (query == "pop") {
            if (!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            } else {
                cout << -1 << '\n';
            }
        }
        else if (query == "size") {
            cout << q.size() << '\n';
        }
        else if (query == "empty") {
            cout << (q.empty() ? 1 : 0) << '\n';
        }
        else if (query == "front") {
            if (!q.empty()) {
                cout << q.front() << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
        else if (query == "back") {
            if (!q.empty()) {
                cout << q.back() << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}