#include <iostream>
#include <vector>
#include <algorithm>
using std::cin, std::cout, std::endl;



int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, num;
    cin >> n;
    std::vector<int> arr;
    for (size_t i = 0; i < n; ++i) {
        cin >> num;
        arr.push_back(num);
    }
    // 불안정 정렬(unstable sort)
    sort(arr.begin(), arr.end(), std::less<int>());
    for (size_t i = 0; i < arr.size(); ++i)
        cout << arr[i] << '\n';
    
    return 0;
}