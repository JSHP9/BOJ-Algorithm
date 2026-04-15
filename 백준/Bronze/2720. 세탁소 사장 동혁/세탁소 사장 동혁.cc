#include <iostream>

using namespace std;

// 쿼터(Quarter, $0.25), 다임(Dime, $0.10), 니켈(Nickel, $0.05), 페니(Penny, $0.01)

int main()
{
    int cnt, num;
    int q = 25, d = 10, n = 5, p = 1;
    int Qc, Dc, Nc, Pc;
    cin >> cnt;
    for(int i =0 ; i < cnt; ++i) {
        Qc = Dc = Nc = Pc = 0;
        cin >> num;
        Qc = num / q;
        Dc = (num % q) / d;
        Nc = ((num % q) % d) / n;
        Pc = (((num % q) % d) % n) / p;
        cout << Qc << ' '<< Dc << ' ' << Nc << ' ' << Pc << ' ' << endl;
        
    }
   return 0;
}