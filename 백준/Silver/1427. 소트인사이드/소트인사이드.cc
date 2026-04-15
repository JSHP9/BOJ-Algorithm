#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout, std::endl;

void insertionSort(std::vector<int>& n);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    cin >> n;
    std::vector<int> num;

    while (n > 0) {
        num.push_back(n % 10);
        n /= 10;
    }

    // sort(num.begin(), num.end(), std::greater<int>());
    insertionSort(num);
    for (size_t i = 0; i < num.size(); ++i)
        cout << num[i];
    
    return 0;
}

void insertionSort(std::vector<int>& n)
{
    for (size_t i = 1; i < n.size(); ++i) {
        int key = n[i];
        int j = i - 1;

        while (j >= 0 && n[j] < key) {
            n[j + 1] = n[j];
            --j;
        }
        n[j + 1] = key;
    }
}