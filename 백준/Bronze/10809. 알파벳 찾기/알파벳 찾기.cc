#include <iostream>
#include <string>
using namespace std;

class Alpha {
    int alpha[26];
    string word;
public:
    Alpha() { 
        for (int i = 0; i < 26; i++)
            alpha[i] = -1;
    }
    void Input() { cin >> word; }
    void Output() {
        for (int i = 0; i < 26; i++)
            cout << alpha[i] << " ";
    }
    void Compare();
};

void Alpha::Compare()
{
    for (int i = 0; i < word.length(); i++) {
        for (int j = 0; j < 26; j++) {
            if (word[i] == 'a' + j) {
                if (alpha[j] != -1)
                    continue;
                alpha[j] = i;
            }
        }
    }
}

int main()
{
    Alpha n;

    n.Input();
    n.Compare();
    n.Output();

    return 0;
}
