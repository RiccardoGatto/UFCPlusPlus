#include <iostream>
using namespace std;
/*int x=0;
int test1(int y){
    x=y;
    return x;
}
void stampaX(){
    std::cout << x;
}
*/
bool uguale0(int x)
{
    return (x == 0);
}

int contaZeri () {
    int occorrenze = 0;
    int n = 0;
    int numIn;
    cout << "Dimmi quanti numeri inserire: ";
    cin >> n;
    cout << "\n";
    for (int i = 1; i <= n; i++)
    {
        cout << "Dammi il " << i << " numero: ";
        cin >> numIn;
        cout << "\n";
        if (uguale0(numIn))
        {
            occorrenze++;
        }
    }
    return occorrenze;
}

int main()
{
    /*int ris = test1(10);
    std::cout << ris;
    stampaX();
    x=22;
    stampaX();*/
    int risultato = contaZeri();
    cout << "Hai inserito " << risultato << " zero";
}