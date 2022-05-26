#include <iostream>
using namespace std;

int funkcja(int tab[15], int szukana);

int main()
{
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int szukana;

	cout << "Podaj liczbe ktora chcesz znalezc:" << endl;
	cin >> szukana;
	
	int pozycja = funkcja(tab, szukana);
	
	if (pozycja == -1) {
		cout << "Niepawidlowa liczba";
	}
	else {
		cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie " << pozycja;
	}
}

int funkcja(int tab[], int szukana)
{
	int l;
	int p;
	int sr;

	l = 0;
	p = 15;

	sr = (l + p) / 2;

	while (l <= p) {
		if (tab[sr] == szukana) {
			return sr;
		}
		if (tab[sr] > szukana) {
			p = sr - 1;
		}
		else {
				l = sr + 1;
		}
		sr = (l + p) / 2;
	}

	return -1;

}
