#include <iostream>
using namespace std;
int main()
{
    double num;
    int n;
    double totale;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Inserisci numero: ";
        cin >> n;
        totale = totale + n;
    }
    cout << "La somma dei numeri inseriti e' " << totale << ", la media e' " << totale / num;
}