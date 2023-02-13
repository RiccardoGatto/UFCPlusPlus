#include <iostream>
using namespace std;
void vediPari(int x)
{
    int i = 0;
    cout << "I numeri pari da 0 a 20 sono:\n";
    do
    {
        cout << i << " ";
        i = i + 2;
    } while (i <= x);
}
int main()
{
    int mioNumero=20;
    vediPari(mioNumero);
}