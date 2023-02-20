#include <string>
#include <iostream>
using namespace std;

bool occorrenza(string word, char c)
{
    int pos = -1;
    pos = word.find(c);
    return (pos != -1);
}
bool occorrenza1(string word, char car)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == car)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string parola;
    char carattere;
    cout << "Dammi una parola: ";
    cin >> parola;
    cout << "Ora dammi una lettera: ";
    cin >> carattere;
    string ris = (occorrenza(parola, carattere)) ? "Si, e' contenuta" : "No, non e' contenuta";
    cout << ris;
}