#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    int a;
    int b;
    int cont=0;
    cout << "Quante coppie vuoi inserire? ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\nPrimo numero della coppia: ";
        cin >> a;
        cout << "Secondo numero della coppia: ";
        cin >> b;
        if ((a == b) or (a-b==1) or (b-a==1))
        {
            cont++;
        }
    }
    cout << "Il numero di coppie uguali o consecutive e' " << cont;
}