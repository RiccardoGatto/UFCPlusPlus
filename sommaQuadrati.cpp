#include <iostream>
using namespace std;
int sommaQuadrati(int x)
{
    int totale = 0;
    do
    {
        totale = totale + x*x;
        x--;
    } while (x >= 1);
    return totale;
}
int main()
{
    int mioNumero = 3;
    cout << "La somma di tutti i quadrati da 1 a " << mioNumero << " e' " << sommaQuadrati(mioNumero);
}