#include <string>
#include <iostream>
using namespace std;

bool occorrenza(string word, char c)
{
    int pos = -1;
    pos = word.find(c);
    return !(pos == -1);
}
int main()
{
    string parola;
    char carattere;
    cout << "Dammi una parola: ";
    cin >> parola;
    cout << "Ora dammi un carattere: ";
    cin >> carattere;
    string ris = (occorrenza(parola, carattere)) ? "Si, e' contenuto" : "No, non e' contenuto";
    cout << ris;
}