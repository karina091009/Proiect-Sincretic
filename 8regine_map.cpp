#include<iostream>
#include<math.h>
using namespace std;

int n, st[25], nr_sol = 0, a[25][25];

int valid(int k)
{
	for (int i = 1; i < k; i++)
	{
		if (st[i] == st[k])
			return 0;
		if (abs((float)(st[k] - st[i])) == abs((float)(k - i)))
			return 0;
	}
	return 1;
}

void tipar(int k)
{
	nr_sol++;
	cout << "Solutia cu numarul" << nr_sol << ": "; cout << endl;
	cout << "-";
	for (int i = 1; i <= n; i++)
		cout << "--";
	cout << "-\n";
	for (int i = 1; i <= n; i++)
	{
		cout << "|";
		for (int j = 1; j <= n; j++)
			if (st[j] == i) cout << "DD"; else cout << "  ";
		cout << "|\n";
	}
	cout << "-";
	for (int

		i = 1; i <= n; i++)
		cout << "--";
	cout << "-\n";

}

void back()
{
	int k;
	k = 1;
	st[1] = 0;
	while (k > 0)
	{
		if (st[k] < n)
		{
			st[k]++;   //urcam in stiva <=> trecem la urm coloana
			if (valid(k))
				if (k == n)
					tipar(k);
				else
					k = k + 1;
		}
		else
		{
			st[k] = 0;
			k--;
		}
	}
}
int main()
{
	do
	{
		cout << "Dati numarul de dame de pe tabla de sah= ";
		cin >> n;
	} while (n <= 3);
	back();
	return 0;

}