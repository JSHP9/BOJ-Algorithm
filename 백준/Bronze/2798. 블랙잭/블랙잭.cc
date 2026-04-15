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
    
    for (int i = 0; i < n - 2;  ++i) {
        for (int j = i + 1; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                currentCard = card1[i] + card2[j] + card3[k];
                if (currentCard <= m)
                    cardSum = max(cardSum, currentCard);
            }
        }
    }
    cout << cardSum;
    
    return 0;
}