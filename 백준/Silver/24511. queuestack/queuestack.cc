#include <iostream>
#include <deque>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, num, m, c;
    cin >> n;
    bool flag[n];
    std::deque<int> qs;

    for (int i = 0; i < n; ++i) {
        cin >> flag[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (flag[i] == 0) // queue인 경우
            qs.push_back(num);
    }

    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> c;
        qs.push_front(c);
        cout << qs.back() << " ";
        qs.pop_back();
    }
    
    return 0;
}