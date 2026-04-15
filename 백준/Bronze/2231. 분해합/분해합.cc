#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int n, sum = 0;
    vector<int> d;
    cin >> n;
    int minN = n; // n의 가장 작은 생성자
    int n1 = n - 1; // n보다 작은 수 전부
    int n2 = n1; // n1 초기화를 위한 n1 복사본
    while (n2) 
    {
        sum += n1; // 처음 수 더함 ex) 216
        
        while (n1) {
            if (n1 < 9) {
                d.push_back(n1 % 10);
                break;
            }
            d.push_back(n1 % 10); // 6, 1, 2 순서대로 넣음
            n1 /= 10;
        }

        for (int i = 0; i < d.size(); ++i) {
            sum += d[i]; // 6, 1, 2 순서대로 더함
        }
        
        if (n == sum) { // 생성자가 맞는지 비교
            minN = n2;
        }

        d.clear(); // 백터 초기화
        sum = 0;
        n2--; // 다음 수로 넘어감
        n1 = n2;
        
    }
    if (minN != n)
        cout << minN;
    else
        cout << 0;
    
    return 0;
}