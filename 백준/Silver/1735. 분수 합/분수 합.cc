#include <iostream>
#include <numeric>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int con[2] = {0};
    int den[2] = {0};
    int c, d;
    for (int i = 0; i < 2; ++i) {
        cin >> c >> d;
        con[i] = c;
        den[i] = d;
    }

    int cn = (con[0] * den[1]) + (con[1] * den[0]);
    int dn = den[0] * den[1];

    int g = std::gcd(cn, dn);

    cout << cn / g << " " << dn / g;
    
    return 0;
}