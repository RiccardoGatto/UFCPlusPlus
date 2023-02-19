#include <iostream>
#include <string>
using namespace std;

int fibonacciRic(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        if (n == 1)
        {
            return 1;
        }
        else
        {
            {
                return (fibonacciRic(n - 2) + fibonacciRic(n - 1));
            }
        }
    }
}
int main()
{
    int numero = 4;
    cout << "" << fibonacciRic(numero);
}