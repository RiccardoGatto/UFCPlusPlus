#include <iostream>
using namespace std;
void stampaTabellina(int x)
{
    int i = 1;
    while (i <= 10)
    {
        cout << x << "x" << i << " = " << x * i << "\n";
        i++;
    }
}
int main()
{
    int mioNumero = 7;
    stampaTabellina(mioNumero);
}