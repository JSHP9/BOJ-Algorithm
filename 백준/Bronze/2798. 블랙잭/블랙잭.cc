#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    int n, m, card;
    vector<int> card1, card2, card3;
    int currentCard, cardSum = 0;

    cin >> n >> m;
    
    for (int i = 0; i < n; ++i) {
        cin >> card;
        card1.push_back(card);
        card2.push_back(card);
        card3.push_back(card);
    }
    // 부르트 포스(무차별 대입, 노가다)
    for (int i = 0; i < n - 2;  ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                currentCard = card1[i] + card2[j] + card3[k]; // 모든 경우의 수 대입
                if (currentCard <= m) // m을 넘지 않게 설정
                    cardSum = max(cardSum, currentCard); // max함수는 algorithm라이브러리
            }
        }
    }
    cout << cardSum;
    
    return 0;
}