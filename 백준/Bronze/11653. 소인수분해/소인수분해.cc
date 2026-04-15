#include <iostream>

using namespace std;

int main() 
{
    int n, i = 2;
    cin >> n;
    while (n >= i) 
    {
        if (n % i == 0) {
            n /= i;
            cout << i << endl;
        }
        else
            i++;
        
        if (n < i)
            break;
    }
    return 0;
}