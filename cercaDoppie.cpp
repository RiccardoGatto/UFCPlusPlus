#include <string>
#include <iostream>
using namespace std;

bool ciSonoDoppieRic(string parola, int i)
{
    if (parola.length() < 2)
    {
        return false;
    }
    else
    {
        if (i == parola.length() - 2)
        {
            return (parola[i] == parola[i + 1]);
        }
        else
        {
            if (parola[i] == parola[i + 1])
            {
                return true;
            }
            else
            {
                return ciSonoDoppieRic(parola, i + 1);
            }
        }
    }
}

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
        if (ciSonoDoppieRic(parola, 0))
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