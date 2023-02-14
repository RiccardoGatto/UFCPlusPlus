#include <iostream>
#include <string>
using namespace std;

void fibonacci(int n)
{
    
    if (n == 0)
    {
        cout << "0";
    }
    else
    {
        if (n == 1)
        {
            cout << "1";
        }
        else
        {
            cout << "0 1";
            int x = 0;
            int y = 1;
            int s = 0;
            while (y <= n)
            {
                s=x+y;
                cout << " " << s;
                x++;
                y=s;
                             
            }
        }
    }
}

int main()
{
    int numero = 6;
    fibonacci(numero);
}