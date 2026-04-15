#include <iostream>

using namespace std;

int main() {
    int n, cnt = 1, room = 1;
    cin >> n;
    while (n > room) 
    {
        if(n == 1) 
            break;
            
        else {
            room += 6 * cnt;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}