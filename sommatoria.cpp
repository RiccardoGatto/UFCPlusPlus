#include <iostream>
using namespace std;
int sommaInteri(int x)
{
    int totale = 0;
    do
    {
        totale = totale + x;
        x--;
    } while (x >= 1);
    return totale;
}
int main()
{
    int mioNumero = 100;
    cout << "La somma di tutti i numeri da 1 a " << mioNumero << " e' " << sommaInteri(mioNumero);
}