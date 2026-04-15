#include <iostream>
#include <string>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int t, score = 0;
    int accumulateScore = 0;
    std::string s;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> s;
        for (int j = 0; j < s.length(); ++j) {
            if (s[j] == 'O') {
                score += 1 + accumulateScore;
                ++accumulateScore;
            }
            else if (s[j] == 'X') {
                accumulateScore = 0;
            }
        }
        accumulateScore = 0;
        cout << score << '\n';
        score = 0;
    }
    
    return 0;
}
