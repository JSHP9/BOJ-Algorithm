#include <iostream>
#include <stack>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, num, cnt = 1;
    std::stack<int> st;
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        st.push(num);
        for (int j = 0; j < n; ++j) {
            if (cnt == n + 1)
                break;
            if (!st.empty() && st.top() == cnt) {
                st.pop();
                ++cnt;
            }
        }
    }
    
    if (st.empty())
        cout << "Nice";
    else
        cout << "Sad";
    
    return 0;
}