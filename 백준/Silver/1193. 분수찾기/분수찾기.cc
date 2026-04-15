#include <iostream>

using namespace std;

int main()
{
    int n, layer = 1;
    cin >> n;
    
    while(n > layer) {
        n -= layer;
        layer++;
    }

    int num, den;
    if (layer % 2 == 0) {
        num = n;
        den = layer - n + 1;
    }
    else if (layer % 2 == 1) {
        den = n;
        num = layer - n + 1;
    }

    cout << num << "/" << den;
    
    return 0;
}