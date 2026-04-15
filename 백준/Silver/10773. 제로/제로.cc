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
    for (int i = 0; i < len; ++i) {
        sum += myStack.top();
        myStack.pop();
    }

    cout << sum;
    
    return 0;
}