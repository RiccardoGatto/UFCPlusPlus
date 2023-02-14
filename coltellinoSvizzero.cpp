#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// Questa funzione ritorna il numero più grande tra due in ingresso
// input: due interi
// output: il più grande tra i due
int piuGrande(int x, int y)
{
    if (x < y)
    {
        return y;
    }
    else
    {
        return x;
    }
}
// Questa funzione controlla se un numero è pari
// input: un numero intero
// output: true o false
bool isEven(int x)
{
    return (x % 2 == 0);
}
// Questa funzione calcola il totale di un costo con l'aggiunta dell'interesse
// input: un costo e un interesse
// output: un costo totale
double costoTotale(double prezzo, int interesse)
{
    return prezzo + (prezzo * interesse / 100);
}
// Questa funzione stampa se puoi entrare o no al bar
// input: un intero che rappresenta l'età
// output: scrive Cheers! Buon divertimento al bar! OPPURE Mi dispiace, sei troppo giovane per bere birra
void buttaFuori(int eta)
{
    if (eta >= 18)
    {
        cout << "Cheers! Buon divertimento al bar!\n";
    }
    else
    {
        cout << "Mi dispiace, sei troppo giovane per bere birra\n";
    }
}
// Questa funzione stampa in ordine decrescente tre numeri inseriti
// input: tre interi
// output: una stampa con i 3 numeri in ordine decrescente
void decrescente(int a, int b, int c)
{
    if (a <= b and a <= c)
    {
        if (b <= c)
        {
            cout << a << " " << b << " " << c;
        }
        else
        {
            cout << a << " " << c << " " << b;
        }
    }
    else if (b <= a and b <= c)
    {
        if (a <= c)
        {
            cout << b << " " << a << " " << c;
        }
        else
        {
            cout << b << " " << c << " " << a;
        }
    }
    else
    {
        if (a <= b)
        {
            cout << c << " " << a << " " << b;
        }
        else
        {
            cout << c << " " << b << " " << a;
        }
    }
}
// Questa funzione stampa il nome inserito con una cornice intorno
// input: una stringa
// output: una stringa con una cornice intorno all'input
void stampaNome(string nome)
{
    string trat = "";
    for (int i = 0; i < nome.length(); i++)
    {
        trat += "-";
    }
    cout << "+---" << trat << "---+\n"
         << "|   " << nome << "   |\n"
         << "+---" << trat << "---+\n";
}
// Questa funzione verifica se un numero è compreso tra due dati
// input: tre interi
// output: true o false
bool isBetween(int a, int b, int c)
{
    return ((b >= a and b <= c) or (b >= c and b <= a));
}
// Questa funzione calcola le due soluzioni di un'equazione di secondo grado
// input: tre interi
// output: una stampa con le soluzioni
void equazione(int a, int b, int c)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        cout << "L'equazione non e' risolvibile nel campo dei numeri Reali";
    }
    else if (delta == 0)
    {
        double x1 = ((b * -1) + sqrt(delta)) / (2 * a);
        cout << "La soluzione dell'equazione e': " << x1;
    }
    else
    {
        double x1 = ((b * -1) + sqrt(delta)) / (2 * a);
        double x2 = ((b * -1) - sqrt(delta)) / (2 * a);
        cout << "Le soluzioni dell'equazione sono: " << x1 << " e " << x2;
    }
}
// Questa funzione riconosce se un anno è bisestile
// input: un intero che rappresenta l'anno
// output: true o false
bool bisestile(int anno)
{
    return ((anno % 4 == 0 and anno % 100 != 0) or (anno % 400 == 0));
}
// Questa funzione stampa le prime 10 righe della tabellina di un numero
// input: un intero
// output: la stampa con la tabellina
void stampaTabelline(int n)
{
    int i = 0;
    while (i <= 10)
    {
        cout << n << "x" << i << " = " << n * i << "\n";
        i++;
    }
}
// Questa funzione stampa le prime m righe della tabellina di un numero
// input: due interi
// output: la stampa con le prime m righe della tabellina del nunmero n
void stampaTabelline(int n, int m)
{
    int i = 0;
    while (i <= m)
    {
        cout << n << "x" << i << " = " << n * i << "\n";
        i++;
    }
}
// Questa funzione stampa tutti i numeri pari da 0 ad un certo numero
// input: un numero intero
// output: una stampa con i numeri pari da 0 al numero in input
void stampaPari(int quanti)
{
    {
        int i = 0;
        cout << "I numeri pari da 0 a " << quanti << " sono:\n";
        do
        {
            cout << i << " ";
            i = i + 2;
        } while (i <= quanti);
    }
}

int main()
{
    cout << piuGrande(3, 3);
    cout << "\n";
    cout << piuGrande(5, 3);
    cout << "\n";
    cout << piuGrande(2, 6);
    cout << "\n";
    if (isEven(4))
    {
        cout << "E' pari";
    }
    else
    {
        cout << "E' dispari";
    }
    cout << "\n";
    if (isEven(45))
    {
        cout << "E' pari";
    }
    else
    {
        cout << "E' dispari";
    }
    cout << "\n";
    cout << costoTotale(1000, 15);
    cout << "\n";
    buttaFuori(50);
    cout << "\n";
    buttaFuori(15);
    cout << "\n";
    decrescente(55, 18, 32);
    cout << "\n";
    stampaNome("Riccardo");
    cout << "\n";
    if (isBetween(4, 5, 65))
    {
        cout << "E' compreso";
    }
    else
    {
        cout << "Non e' compreso";
    }
    cout << "\n";
    if (isBetween(4, 6, 5))
    {
        cout << "E' compreso";
    }
    else
    {
        cout << "Non e' compreso";
    }
    cout << "\n";
    equazione(4, 5, 6);
    cout << "\n";
    equazione(1, -6, 5);
    cout << "\n";
    if (bisestile(2000))
    {
        cout << "E' bisestile";
    }
    else
    {
        cout << "Non e' bisestile";
    }
    cout << "\n";
    if (bisestile(2001))
    {
        cout << "E' bisestile";
    }
    else
    {
        cout << "Non e' bisestile";
    }
    cout << "\n";
    if (bisestile(1700))
    {
        cout << "E' bisestile";
    }
    else
    {
        cout << "Non e' bisestile";
    }
    cout << "\n";
    stampaTabelline(7);
    cout << "\n";
    stampaTabelline(5, 6);
    cout << "\n";
    stampaPari(21);
    cout << "\n";
}