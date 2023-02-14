#include <iostream>
using namespace std;
int sommaInteri(int n)
{
    int somma = 0;
    int i = 1;
    if ((n == 0) or (n == 1) or (n == 2))
    {
        return 0;
    }
    else
    {
        while ((somma + i) <= n)
        {
            somma = somma + i;
            i++;
        }
        return i-1;
    }
}

int main()
{
    int numero = 30;
    int totN = sommaInteri(numero);
    cout << totN;
}