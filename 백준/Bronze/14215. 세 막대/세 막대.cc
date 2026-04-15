#include <iostream>

using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = (a > b) ? a : b;
    int max = (c > x) ? c : x;
    
    if (max < a + b + c - max)
        cout << a + b + c;
    else 
    {
        for (int i = max; i > 0; --i) {
            if (i < a + b + c - max) {
                cout << a + b + c - max + i;
                break;
            }
        }
    }
    
    return 0;
}