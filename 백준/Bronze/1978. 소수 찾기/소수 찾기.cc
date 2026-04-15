#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n, prime, cnt = 0;
    vector<int> x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> prime;
        x.push_back(prime);
        if (x[i] == 1) {
            continue;
        }
        
        for (int j = 2; j <= prime / 2; ++j) {
            if (x[i] % j == 0) {
                x[i] = 0;
            }
        }

        if (x[i] != 0) {
            cnt++;
        }
    }
    cout << cnt;
    
    return 0;
}