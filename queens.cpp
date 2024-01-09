#include<iostream>
#include<math.h>
using namespace std;

const int n = 8; // Fixăm dimensiunea tablei de șah la 8x8
int st[n + 1];   // Vectorul stiva

// Verifică dacă poziția (linia, coloana) este validă pentru a plasa o regină
bool valid(int linie, int coloana)
{
    for (int i = 1; i < linie; i++)
    {
        if (st[i] == coloana || abs(st[i] - coloana) == abs(i - linie))
            return false;
    }
    return true;
}

// Afișează o soluție găsită
void tipar()
{
    cout << "Solutia: ";
    for (int i = 1; i <= n; i++)
    {
        cout << "(" << i << ", " << st[i] << ") ";
    }
    cout << endl;
}

// Funcția de backtracking
void back(int linie)
{
    if (linie > n)
    {
        tipar(); // Am plasat toate reginele, afișăm soluția
        return;
    }

    for (int coloana = 1; coloana <= n; coloana++)
    {
        if (valid(linie, coloana))
        {
            st[linie] = coloana; // Plasează regina pe linia curentă și coloana respectivă
            back(linie + 1);     // Continuă cu următoarea linie
        }
    }
}

int main()
{
    back(1); // Pornim de la prima linie
    return 0;
}
