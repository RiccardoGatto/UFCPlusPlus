#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, a;
    int cont = 0;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Inserisci il " << i << " numero: ";
        cin >> a;
        if (a < 50)
        {
            cout << "Il numero inserito e' minore di 50\n";
            cont++;
        }
    }
    cout << "I numeri minori di 50 sono: " << cont;
}