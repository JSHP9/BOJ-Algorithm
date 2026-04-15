#include <iostream>

using namespace std;

int main()
{
    string result;
    int N, B;
    int ch;
    cin >> N >> B;
    
    while(N > 0) {
        ch = N % B;
        
        if (ch < 10) {
            result += (ch + '0');
        }
        else {
            result += (ch + 'A' - 10);
        }
        
        N /= B;
    }
    
    for(int i = result.length() - 1; i >= 0; --i) {
        cout << result[i];
    }
    
   return 0;
}