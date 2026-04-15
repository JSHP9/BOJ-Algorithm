#include <iostream>
#include <deque>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, query, x;
    std::deque<int> deq;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> query;
        if (query == 1) {
            // 1 X: 정수 X를 덱의 앞에 넣는다. (1 ≤ X ≤ 100,000)
            cin >> x;
            deq.push_front(x);
        }
        else if (query == 2) {
            // 2 X: 정수 X를 덱의 뒤에 넣는다. (1 ≤ X ≤ 100,000)
            cin >> x;
            deq.push_back(x);
        }
        else if (query == 3) {
            // 3: 덱에 정수가 있다면 맨 앞의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
            if (!deq.empty()) {
                cout << deq.front() << '\n';
                deq.pop_front();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (query == 4) {
            // 4: 덱에 정수가 있다면 맨 뒤의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
            if (!deq.empty()) {
                cout << deq.back() << '\n';
                deq.pop_back();
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (query == 5) {
            // 5: 덱에 들어있는 정수의 개수를 출력한다.
            cout << deq.size() << '\n';
        }
        else if (query == 6) {
            // 6: 덱이 비어있으면 1, 아니면 0을 출력한다.
            if (deq.empty()) 
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (query == 7) {
            // 7: 덱에 정수가 있다면 맨 앞의 정수를 출력한다. 없다면 -1을 대신 출력한다.
            if (!deq.empty()) {
                cout << deq.front() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
        else if (query == 8) {
            // 8: 덱에 정수가 있다면 맨 뒤의 정수를 출력한다. 없다면 -1을 대신 출력한다.
             if (!deq.empty()) {
                cout << deq.back() << '\n';
            }
            else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}