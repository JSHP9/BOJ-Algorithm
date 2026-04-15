#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using std::cout, std::cin;

void push(int n, std::vector<int>& v);

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);

    int a, b;
    std::vector<int> setA, setB;
    cin >> a >> b;
    int cntA = a;
    int cntB = b;
    
    push(a, setA);
    push(b, setB);

    std::unordered_map<int, int> mapA, mapB;
    
    for (size_t i = 0; i < setA.size(); ++i) 
        mapA[setA[i]] = 1;
    
    for (size_t i = 0; i < setB.size(); ++i) 
        mapB[setB[i]] = 1;

    // 차집합 검사
    for (const auto& a : setA) 
        if (mapB[a])
            --cntA;
    for (const auto& b : setB)
        if (mapA[b]) 
            --cntB;

    cout << cntA + cntB;
    
    return 0;
}

void push(int n, std::vector<int>& v)
{
    int s;
    for (size_t i = 0; i < n; ++i) {
        cin >> s;
        v.push_back(s);
    }
}