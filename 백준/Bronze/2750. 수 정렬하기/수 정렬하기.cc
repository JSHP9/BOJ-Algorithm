#include <iostream>
#include <vector>

using std::cin, std::cout, std::endl;

// 삽입정렬 알고리즘
void insertionSort(std::vector<int>& arr);

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
    insertionSort(arr);
    
    for (size_t i = 0; i < n; ++i)
        cout << arr[i] << '\n';
    
    return 0;
}

// 삽입정렬은 첫번째 요소는 이미 정렬된 상태라고 가정하고 시작함
// 첫번째 요소가 정렬되어있지 않더라도 문제없이 동작함
void insertionSort(std::vector<int>& arr)
{
    for (size_t i = 1; i < arr.size(); ++ i) {
        // 현재 인덱스 i의 값(정렬할 요소)를 key로 저장
        int key = arr[i];

        // i보다 1 작은 인덱스를 j로 설정
        int j = i - 1;

        // key보다 큰 값은 오른쪽으로 밀기
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // j번째 값을 한 칸 뒤로 이동
            --j; // j를 왼쪽으로 한 칸 이동
        }
        // key는 j + 1 위치에 삽입
        arr[j + 1] = key;
    }
}