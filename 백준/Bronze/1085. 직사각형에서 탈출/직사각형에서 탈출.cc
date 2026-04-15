#include <iostream>

using namespace std;

int main() 
{
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    int Wmin = (x >= w-x) ? w-x : x;
    int Hmin = (y >= h-y) ? h-y : y;
    int min = (Wmin >= Hmin) ? Hmin : Wmin;
    cout << min;
    return 0;
}