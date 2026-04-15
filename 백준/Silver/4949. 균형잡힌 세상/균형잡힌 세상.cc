#include <iostream>
#include <stack>
#include <string>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    while (true) {
        std::string str = "";
        std::stack<char> st;
        std::string ans = "yes";
        
        std::getline(cin, str);
        if (str.length() == 1 && str == ".")
            break;
        
        for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				st.push(str[i]);
			}
            else if (str[i] == ')') {
    			if (!st.empty() && st.top() == '(') 
    				st.pop();
                else {
                    ans = "no";
                    break;
                }
            }
            else if (str[i] == ']') {
                if (!st.empty() && st.top() == '[')
                    st.pop();
                else {
                    ans = "no";
                    break;
                }
            }
		}
        
        if (!st.empty()) 
            ans = "no";
        
        cout << ans << '\n';
        
    }
    
    return 0;
}