#include <iostream>
#include <stack>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, x, q;
    std::stack<int> myStack;
    cin >> n;

    while (n--) {
        cin >> q;
        if (q == 1) {
            // X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
            cin >> x;
            myStack.push(x);
            continue;
        }
        if (q == 2 || q == 5) {
            // 2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
            if (myStack.size()) {
                cout << myStack.top() << '\n';
                if (q == 2)
                    myStack.pop();
            }
            else
                cout << -1 << '\n';
            continue;
        }
        if (q == 3) {
            // 스택에 들어있는 정수의 개수를 출력한다.
            cout << myStack.size() << '\n';
            continue;
        }
        if (q == 4) {
            // 스택이 비어있으면 1, 아니면 0을 출력한다.
            cout << myStack.empty() << '\n';
            continue;
        }
    }
    
    return 0;
}