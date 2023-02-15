#include <string>
#include <iostream>
using namespace std;

bool ciSonoDoppie(string parola)
{
    int y = 1;
    while (y <= parola.length() - 1)
    {
        if (parola[y - 1] == parola[y])
        {
            return true;
        }
        else
        {
            y++;
        }
    }
    return false;
}

int main()
{
    string word;
    cout << "Dammi una parola: ";
    getline(cin, word);
    cout << "\n";
    string ris = ciSonoDoppie(word) ? "Hai inserito una parola con doppie" : "Hai inserito una parole senza doppie";
    cout << ris;
}