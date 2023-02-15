#include <iostream>
using namespace std;
int sommaInteri(int n)
{
    int somma = 0;
    int i = 0;
    if ((n == 1) or (n == 2))
    {
        return 0;
    }
    else
    {
        while (somma <= n)
        {
            i++;
            somma += i;
        }
        return i-1;
    }
}
int main()
{
    int numero = 20;
    int totN = sommaInteri(numero);
    cout << totN;
}