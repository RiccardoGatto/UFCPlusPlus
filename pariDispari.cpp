#include <iostream>
#include <string>
using namespace std;
int main()
{
    int valore = 0;

    cout << "Inserisci un numero: ";
    cin >> valore;

    if (valore % 2 == 1)
        cout << "Il numero e' dispari\n";
    else
        cout << "Il numero e' pari\n";
    return 0;
}