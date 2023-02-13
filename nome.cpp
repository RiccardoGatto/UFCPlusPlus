#include <iostream>
#include <string>
using namespace std;
int main()
{
    string nome;
    cout << "Inserisci il tuo nome\n";
    getline(cin, nome);
    string trat = "";
    for (int i = 0; i < nome.length(); i++)
    {
        trat += "-";
    }
    cout << "+---" << trat << "---+\n"
         << "|   " << nome << "   |\n"
         << "+---" << trat << "---+\n";
}