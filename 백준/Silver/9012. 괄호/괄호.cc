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
            // 스택이 비어있을 때 호출되면 정의되지 않은 동작을 유발함
            // 즉 스택이 비어있는데 top을 호출하면 프로그램이 충돌함 그래서 empty()를 추가해야 제대로 동작함
			// 요약: !myStack.empty()는 stack이 비어 있는 상태에서 top()호출 방지 용도로 사용
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