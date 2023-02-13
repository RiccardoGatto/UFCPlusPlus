#include <iostream>
#include <string>
using namespace std;
int main()
{
    double prezzo, prezzoAgg;
    int rate;
    cout << "Quanto costa il prodotto che vuoi acquistare? \n";
    cin >> prezzo;
    cout << "In quante rate lo vuoi pagare? \n";
    cin >> rate;
    prezzoAgg = prezzo + prezzo * 0.05;
    double singolaRata = prezzoAgg / rate;
    cout << "Il totale da spendere, comprensivo del 5% di interesse e' " << prezzoAgg << " euro, ovvero " << rate << " rate da " << singolaRata << " euro\n";
    return 0;
}