#include <iostream>
#include <stack>
#include <string>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int n;
    cin >> n;
    while (n--) {
        std::string input;
        std::stack<char> myStack;
        std::string ans = "YES";
        
        cin >> input;
        for (int i = 0; i < input.length(); i++) {
			//'('는 스택에 저장
			if (input[i] == '(') {
				myStack.push(input[i]);
			}
			//')'가 나오면 스택에 저장된 '('와 짝이 맞는지 확인하고 pop
			else if (!myStack.empty() && input[i] == ')' && myStack.top() == '(') {
				myStack.pop();
			}
			//위의 경우를 제외하고는 모두 vps가 아닌 상황이므로 종료(break)
			else {
				ans = "NO";
				break;
			}
		}
        
        if (!myStack.empty())
            ans = "NO";

        cout << ans << '\n';
        
    }
    
    return 0;
}