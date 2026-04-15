#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string N;
    int B, result = 0;
    char ch;
    cin >> N >> B;
    
    for (int i = 0; i < N.length(); ++i) {
        ch = N[N.length() - 1 - i];
            
		if ('0' <= ch && ch <= '9') {
            result += (ch - '0') * pow(B, i); 
        }
		else {
            result += (ch - 'A' + 10) * pow(B, i);
        }
        
    }
    cout << result;
    return 0;
}