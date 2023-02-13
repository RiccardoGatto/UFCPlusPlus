#include <iostream>
#include <string>
using namespace std;
int main()
{
    int eta;
    cout << "Dimmi quanti anni hai: \n";
    cin >> eta;
    if (eta >= 18)
    {
        cout << "Cheers! Buon divertimento al bar!\n";
    }

    else
    {
        cout << "Mi dispiace, sei troppo giovane per bere birra\n";
    }
}