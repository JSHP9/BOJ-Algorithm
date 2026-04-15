#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using std::cout, std::cin;

int main() 
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int n, m;
    std::string pokemon;
    std::vector<std::string> book;
    cin >> n >> m;
    for (size_t i = 0; i < n; ++i) {
        cin >> pokemon;
        book.push_back(pokemon);
    }

    // 도감 등록
    int cnt = 1;
    std::unordered_map<int, std::string> pokemonNum;
    std::unordered_map<std::string, int> pokemonName;
    for (size_t i = 0; i < book.size(); ++i) {
        pokemonNum[cnt] = book[i];
        pokemonName[book[i]] = cnt;
        ++cnt;
    }

    // 문제
    std::string question;
    for (size_t i = 0; i < m; ++i) {
        cin >> question;
        if (std::isdigit(question[0])) 
            cout << pokemonNum[std::stoi(question)] << '\n';
        else 
            cout << pokemonName[question] << '\n';
    }

    return 0;
}