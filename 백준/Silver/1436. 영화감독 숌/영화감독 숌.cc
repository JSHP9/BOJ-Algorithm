#include <iostream>

using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, end = 666, endCnt = 0;
    int endCp = end;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        while (endCp) {
            if (endCp % 10 == 6 && (endCp/10) % 10 == 6 && ((endCp/10)/10) % 10 == 6) 
                endCnt = 3;       
            endCp /= 10;
        }
        
        if (endCnt < 3) --i;
        
        end++;
        endCp = end;
        endCnt = 0;
    }
    cout << end - 1;
    return 0;
}