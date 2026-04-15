#include <iostream>

using namespace std;

int main()
{
    int n, dot = 2;
    cin >> n;
    
    while(n--)
        dot = (dot * 2) - 1;
    
    cout << dot * dot << endl;
    return 0;
}