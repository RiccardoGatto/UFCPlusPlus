#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "Primo numero: \n";
    cin >> a;
    cout << "Secondo numero: \n";
    cin >> b;
    cout << "Terzo numero: \n";
    cin >> c;
    // se a è il più piccolo
    if (a <= b and a <= c)
    {
        if (b <= c)
        {
            cout << a << " " << b << " " << c;
        }
        else
        {
            cout << a << " " << c << " " << b;
        }
    }
    else if (b <= a and b <= c)
    {
        if (a <= c)
        {
            cout << b << " " << a << " " << c;
        }
        else
        {
            cout << b << " " << c << " " << a;
        }
    }
    else
    {
        if (a <= b)
        {
            cout << c << " " << a << " " << b;
        }
        else
        {
            cout << c << " " << b << " " << a;
        }
    }
}