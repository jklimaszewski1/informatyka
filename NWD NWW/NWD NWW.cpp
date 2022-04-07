#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int nww;
	int iloczyn;

	cout << "Podaj pierwsza liczbe:" << endl;
	cin >> a;
	cout << "Podaj druga liczbe:" << endl;
	cin >> b;
	iloczyn = a * b;
	while (a != b) {
		if (a < b)
			b = b - a;
		else
			a = a - b;
	}

	nww = iloczyn / a;
	cout << "Najwiekszy wspolny dzielnik: " << a << endl;
	cout << "Najwieksza wspolna wielokrotnosc: " << nww << endl;





}