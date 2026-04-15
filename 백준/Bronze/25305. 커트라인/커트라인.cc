#include <iostream>
#include <vector>

using std::cin, std::cout, std::endl;

// 삽입정렬 알고리즘
void insertionSort(std::vector<int>& arr);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, num, k;
    cin >> n >> k;
    std::vector<int> arr;
    for (size_t i = 0; i < n; ++i) {
        cin >> num;
        arr.push_back(num);
    }
    
    insertionSort(arr);

    k = arr[n - k];
    cout << k;
    
    return 0;
}

void insertionSort(std::vector<int>& arr)
{
    for (size_t i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}