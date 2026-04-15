#include <iostream>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t;
    int w, h, n;
    int result = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> h >> w >> n;
        if (n%h == 0) {
			result = h * 100 + (n / h);
		}
		else {
			result = (n%h) * 100 + (n / h) + 1;
		}
        cout << result << '\n';
    }
    
    return 0;
}
