#include <iostream>
#include <stack>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n, x;
    int sum = 0;
    std::stack<int> myStack;
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (!x)
            myStack.pop();
        else
            myStack.push(x);
    }

    int len = myStack.size();
    // len 안쓰고 myStack.size()를 범위로 지정하면 pop으로 인해 범위가 점점 짧아져서 데이터 전부 추출이 안됨
    for (int i = 0; i < len; ++i) { 
        sum += myStack.top();
        myStack.pop();
    }

    cout << sum;
    
    return 0;
}