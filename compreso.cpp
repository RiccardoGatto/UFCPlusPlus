#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Inserisci A: \n";
    cin >> a;
    cout << "Inserisci B: \n";
    cin >> b;
    cout << "Inserisci C: \n";
    cin >> c;
    if ((b >= a and b <= c) or (b >= c and b <= a))
    {
        cout << "E' compreso";
    }
    else
    {
        cout << "Non e' compreso";
    }
}