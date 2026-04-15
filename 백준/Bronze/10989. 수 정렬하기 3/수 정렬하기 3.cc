#include <iostream>

using std::cin, std::cout, std::endl;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, num;
    cin >> n;

    int arr[10001] = { 0 };

	for (size_t i = 0; i < n; i++) {
		cin >> num;
		arr[num]++;
	}

	for (size_t i = 1; i < 10001; i++) {
		if (arr[i] > 0) {
			for (size_t j = 0; j < arr[i]; j++) {
				cout << i << "\n";
			}
		}
	}
    
    return 0;
}