#include <iostream>
#include <string>
using namespace std;

void fibonacci(int n)
{
    string ris = "";
    int s;
    int prec = 1;
    int prec2 = 0;

    if (n == 0)
    {
        ris = "";
    }
    else if (n == 1)
    {
        ris = "0";
    }
    else if (n == 2)
    {
        ris = "0 1";
    }
    else
    {
        ris = "0 1 ";
        for (int i = 2; i < n; i++)
        {
            s = prec + prec2;
            ris += to_string(s) + " ";
            prec2=prec;
            prec=s;
        }
    }
    cout << ris;
}

int main()
{
    int numero = 8;
    fibonacci(numero);
}