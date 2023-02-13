#include <iostream>
#include <string>
using namespace std;
int main()
{
    int min;
    int max;
    int n;
    int count=0;
    cout << "Quanti numeri vuoi inserire? ";
    cin >> count;
    cout << "Inserisci il 1 numero: ";
    cin >> n;
    max=n;
    min=n;
    for (int i = 2; i <= count; i++)
    {
        cout << "Inserisci il " << i << " numero: ";
        cin >> n;
        if (n < min)
        {
            min = n;
        }  
        if (n > max)
        {
            max = n;
        }
    }
    cout << "Il numero piu' piccolo inserito e' " << min << ", e il piu' grande e' " << max;
}