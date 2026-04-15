#include <iostream>

using namespace std;

int main()
{
    int a, b, v, cnt = 1;
    cin >> a >> b >> v;
    
    v -= a;

    if (v % (a - b) == 0)
        cnt += v / (a - b);
    else {
        cnt += v / (a - b);
        cnt++;
    }
    
    cout << cnt;
    
    return 0;
}