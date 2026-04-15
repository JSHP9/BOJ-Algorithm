#include <iostream>

using namespace std;

int main() 
{
    int x, y, z;
    while (true) {
        int max = -1;
        cin >> x >> y >> z;

        int a = (x >= y) ? x : y;
        max = (z >= a) ? z : a;

        if (x == 0 && y == 0 && z == 0)
            break;
        
        if (max < x + y + z - max) {
            if (x == y && x == z && y == z)
                cout << "Equilateral" << endl;
    
            else if (x == y || x == z || y == z)
                cout << "Isosceles" << endl;
        
            else
                cout << "Scalene" << endl;
        }
        else
            cout << "Invalid" << endl;
    }
    return 0;
}