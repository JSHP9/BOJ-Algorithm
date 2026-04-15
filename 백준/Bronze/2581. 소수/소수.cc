#include <iostream>

using namespace std;

int main() 
{
    int n, m;
    int min = -1, sum = 0;
    bool prime = true;
    cin >> m;
    cin >> n;
    for (int i = m; i <= n; ++i) {
        prime = true;

        if (i < 2)
            prime = false;
        
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
    
        if (prime) {
            sum += i;
            if (min == -1)
                min = i;
        }
    }
    if (sum) {
        cout << sum << endl;
        cout << min;
    }
    else {
        cout << -1;
    }
    
    return 0;
}