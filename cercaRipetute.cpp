#include <string>
#include <iostream>
using namespace std;
bool ripetuteRic(string parola, int x, int y)
{
    if (parola.length() == 1 or parola.length() == 0)
    {
        return false;
    }
    else
    {
        if (x == parola.length() - 2)
        {
            return (parola[x] == parola[y]);
        }
        else
        {
            if (y == parola.length() - 1)
            {
                if (parola[x] == parola[y])
                {
                    return true;
                }
                else
                {
                    return ripetuteRic(parola, x + 1, x + 2);
                }
            }
            else
            {
                if (parola[x] == parola[y])
                {
                    return true;
                }
                else
                {
                    return ripetuteRic(parola, x, y + 1);
                }
            }
        }
    }
}
bool ripetute(string parola)
{
    bool presente = false;
    int x, y;
    for (x = 0; x < parola.length() - 2; x++)
    {
        for (y = x + 1; y < parola.length(); y++)
        {
            if (parola[x] == parola[y])
            {
                return true;
            }
        }
    }
    return false;
}

bool cercaParoleRipetute()
{
    string parola;
    bool doppie = false;
    do
    {
        cout << "Inserisci una parola (0 per terminare l'inserimento): ";
        cin >> parola;
        if (ripetuteRic(parola, 0, 1))
        {
            doppie = true;
        }
    } while (parola != "0");
    return doppie;
}

int main()
{
    // cout << (ripetuteRic("case", 0, 1) ? "\nHai inserito una parola con lettere ripetute" : "\nHai inserito una parola senza lettere ripetute");
    // cout << (ripetute("acsa") ? "\nHai inserito una parola con lettere ripetute" : "\nHai inserito una parola senza lettere ripetute");
    cout << (cercaParoleRipetute() ? "\nHai inserito almeno una parola con lettere ripetute" : "\nHai inserito solo parole senza lettere ripetute");
}