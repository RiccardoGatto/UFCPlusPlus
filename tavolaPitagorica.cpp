#include <iostream>
#include <string>
using namespace std;
void stampaTavola(int numero)
{
    int x = 0;
    int y = 0;
    for (int i = 0; i <= numero; i++)
     {
         cout << "\e[4m"
              << "\t" << i;
     }
     cout << "\e[0m"
          << "\n"
          << "\n";
    while (x <= numero)
    {
        cout << x << "| ";
        while (y <= numero)
        {
            cout << "\t" << x * y;
            y++;
        }
        cout << "\n";
        y = 0;
        x++;
    }
}

int main()
{
    int mioNumero = 7;
    stampaTavola(mioNumero);
}