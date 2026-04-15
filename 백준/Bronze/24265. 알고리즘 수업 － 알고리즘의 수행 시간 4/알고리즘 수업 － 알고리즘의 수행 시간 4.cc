#include <iostream>

using namespace std;

int main() 
{
    long long n;
    cin >> n;
    cout << (n * (n-1)) / 2 << "\n" << 2; // 시그마공식(등차수열 합)
    return 0;
}