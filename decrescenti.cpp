#include <iostream>
using namespace std;
void stampaDecrescenti(int x, int y)
{
    if (x == y)
    {
        cout << x;
    }
    else
    {
        cout << x << " ";
        stampaDecrescenti(x-1, y);
    }
}
int main()
{
    int num1 = 3;
    int num2 = 5;
    if (num1 >= num2)
    {
        cout << "I numeri naturali compresi tra " << num1 << " e " << num2 << " sono:\n";
        stampaDecrescenti(num1, num2);
    }
    else
    {
        cout << "I numeri naturali compresi tra " << num2 << " e " << num1 << " sono:\n";
        stampaDecrescenti(num2, num1);
    }
}