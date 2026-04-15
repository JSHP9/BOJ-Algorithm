#include <iostream>

using namespace std;

int main()
{
     int n, k, i = 0;
    cin >> n >> k;
    while (k) 
    {
        i++;
        if (n % i == 0)
            k--;
        
        if (i > n) {
            i = 0;
            break;
        }
    }
    cout << i;
    return 0;
}