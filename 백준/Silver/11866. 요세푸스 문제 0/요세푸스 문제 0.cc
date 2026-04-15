#include <iostream>
#include <queue>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int n, k, cnt = 1;
    std::queue<int> q;

    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        q.push(i);

    cout << "<";
    while (q.size() != 0) {
        for (int i = 1; i < k; ++i) {
            q.push(q.front()); //	k-1번째 원소를 맨 뒤에 삽입
            q.pop();
        }
        cout << q.front();		
        if (q.size() != 1)
			cout << ", ";
		q.pop();
    }

    cout << ">";
    
    return 0;
}
