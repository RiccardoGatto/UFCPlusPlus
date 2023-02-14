#include <iostream>
using namespace std;
void stampaDecrescenti(int x, int y)
{
    if (x == y)
    {
        if (x % 3==0)
        {
            cout << y;
        }
    }
    else
    {
        if (x % 3 == 0)
        {
            cout << x << " ";
            stampaDecrescenti(x - 1, y);
        }
        else
        {
            stampaDecrescenti(x - 1, y);
        }
    }
}
int main()
{
    int num1 = 301;
    int num2 = 149;
    if (num1 >= num2)
    {
        cout << "I numeri naturali divisibili per 3 compresi tra " << num1 << " e " << num2 << " sono:\n";
        stampaDecrescenti(num1, num2);
    }
    else
    {
        cout << "I numeri naturali divisibili per 3 compresi tra " << num2 << " e " << num1 << " sono:\n";
        stampaDecrescenti(num2, num1);
    }
}