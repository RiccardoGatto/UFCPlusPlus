#include <iostream>
using namespace std;
void vediPari(int x)
{
    int i = 0;
    cout << "I numeri pari da 0 a " << x << " sono:\n";
    do
    {
        cout << i << " ";
        i = i + 2;
    } while (i <= x);
}
int main()
{
    int mioNumero=65;
    vediPari(mioNumero);
}