#include <iostream>
#include <string>
using namespace std;
int maggiore (){
    int numero;
    int max;
    cout << "Inserisci il 1 numero: ";
    cin >> numero;
    max=numero;
    for (int i = 2; i <= 10; i++)
    {
        cout << "Inserisci il " << i << " numero: ";
        cin >> numero;
        if (numero > max)
        {
            max = numero;
        }
    }
    return max;
}
int main()
{
    cout << "Dati 10 numeri inseriti questo programma restituisce il piu' grande\n\n";
    int massimo= maggiore();
    cout << "\nIl piu' grande tra tutti i numeri inseriti e': " << massimo;
}