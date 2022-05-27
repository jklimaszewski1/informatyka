#include <iostream>
using namespace std;


void Szyfr(char tab[], int klucz);

int main()
{
	char tab[1000];
	int klucz;

	cout << "Podaj wyraz skladajacy sie z malych liter:" << endl;
	cin >> tab;

	cout << "Podaj klucz z przedialu [-26..26]:" << endl;
	cin >> klucz;

	Szyfr(tab, klucz);
	cout << "Po zaszyfrowaniu: " << tab << endl;
	Szyfr(tab, -klucz);
	cout << "Po rozszyfrowaniu: " << tab << endl;
}

void Szyfr(char tab[], int klucz)
{
	int dl;

	dl = strlen(tab);

	if (!(klucz >= -26 and klucz <= 26)) {
		return;
	}

	if (klucz >= 0) {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz <= 'z') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz - 26;
			}
		}
	}
	else {
		for (int i = 0; i < dl; i++) {
			if (tab[i] + klucz >= 'a') {
				tab[i] += klucz;
			}
			else {
				tab[i] = tab[i] + klucz + 26;
			}

		}
	}
}
