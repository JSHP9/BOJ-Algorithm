#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    
    while (true) {
        cin >> n;
        
        if (n == -1)
            break;

        vector<int> Vsum;
        int sum = 0;
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {
                Vsum.push_back(i);
                sum += i;
            }
        }

        if (sum == n) {
            cout << n << " = ";
            for (size_t i = 0; i < Vsum.size(); ++i) { // size_t: 부호없는 정수형 타입
                cout << Vsum[i];
                if (i != Vsum.size() - 1) {
                    cout << " + ";
                }
            }
            cout << endl;
        }
        else {
            cout << n << " is NOT perfect." << endl;
        }
    }
    
    return 0;
}
