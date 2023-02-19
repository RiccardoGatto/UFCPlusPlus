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
bool cercaParoleDoppie()
{
    string parola = "";
    bool noDoppie = 1;
    while (parola != "0" and noDoppie)
    {
        cout << "Inserisci una parola (0 per terminare l'inserimento): ";
        cin >> parola;
        if (ciSonoDoppie(parola))
        {
            noDoppie = 0;
        }
    }
    return !noDoppie;
}
int main()
{
    cout << (cercaParoleDoppie() ? "\nHai inserito parole con doppie" : "\nNon hai inserito parole con doppie");
}