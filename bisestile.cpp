#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Inserisci un anno: \n";
    int anno;
    cin >> anno;
    if ((anno % 4 == 0 and anno % 100 != 0) or (anno % 400 == 0))
    {
        cout << "E' bisestile";
    }
    else
    {
        cout << "Non e' bisestile";
    }
    return 0;
}