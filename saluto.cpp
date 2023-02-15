#include <string>
#include <iostream>
using namespace std;

void saluta(string n)
{
    cout << "Ciao " << n;
}
int main()
{
    string nome;
    cout << "Come ti chiami? ";
    getline (cin, nome);
    cout << "\n";
    saluta(nome);
}