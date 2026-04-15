#include <iostream>
#include <queue>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n;
    std::queue<int> q;

    cin >> n;
    for (int i = 1; i <=n; ++i)
        q.push(i);

    while (q.size() != 1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }

    cout << q.front();
    
    return 0;
}
