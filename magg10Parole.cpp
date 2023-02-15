#include <string>
#include <iostream>
using namespace std;

string cercaPiuGrande()
{
    string max = "";
    string parola;
    for (int i = 1; i <= 10; i++)
    {
        cout << "Inserisci la " << i << " parola: ";
        cin >> parola;
        if (parola.length() > max.length())
        {
            max = parola;
        }
    }
    return max;
}
int main()
{
    string massima = cercaPiuGrande();
    cout << "La parola piu' lunga inserita e' " << massima;
}