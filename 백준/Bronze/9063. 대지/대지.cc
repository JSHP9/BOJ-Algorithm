#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() 
{
    int n, x, y;
    int minx = INT_MAX, miny = INT_MAX;
    int maxx = INT_MIN, maxy = INT_MIN;
    vector<int> vx, vy;
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        vx.push_back(x);
        vy.push_back(y);
        
        if (vx[i] > maxx)
            maxx = vx[i];
        if (vy[i] > maxy)
            maxy = vy[i];
                
        if (vx[i] < minx)
            minx = vx[i];
        if (vy[i] < miny)
            miny = vy[i];
    }
    cout << (maxx - minx) * (maxy - miny);
    return 0;
}