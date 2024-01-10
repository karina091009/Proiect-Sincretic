#include<iostream>
#include<math.h>
using namespace std;

const int n = 8; // Fixăm dimensiunea tablei de șah la 8x8
int st[n + 1];   // Vectorul stiva

// Afișează o soluție găsită sub formă de tablă de șah cu literele "R"
void tipar()
{
    cout << "Solutia: " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (st[i] == j)
                cout << "R ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}

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
