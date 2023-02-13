#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    double a;
    double b;
    double c;
    cout << "Inserisci A: \n";
    cin >> a;
    cout << "Inserisci B: \n";
    cin >> b;
    cout << "Inserisci C: \n";
    cin >> c;
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "L'equazione non e' risolvibile nel campo dei numeri Reali";
    }
    else if (delta == 0)
    {
        double x1 = ((b * -1) + sqrt(delta)) / (2 * a);
        cout << "La soluzione dell'equazione e': " << x1;
    }
    else
    {
        double x1 = ((b * -1) + sqrt(delta)) / (2 * a);
        double x2 = ((b * -1) - sqrt(delta)) / (2 * a);
        cout << "Le soluzioni dell'equazione sono: " << x1 << " e " << x2;
    }
}
