#include <iostream>
#include <vector>

using std::cin, std::cout, std::endl;

// 삽입정렬 알고리즘
void insertionSort(std::vector<int>& arr);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, average = 0, median = 0;
    std::vector<int> arr;
    for (size_t i = 0; i < 5; ++i) {
        cin >> n;
        arr.push_back(n);
        average += arr[i];
    }
    average /= 5;
    
    insertionSort(arr);

    median = arr[2];

    cout << average << '\n' << median;
    
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