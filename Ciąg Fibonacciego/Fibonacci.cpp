#include <iostream>
using namespace std;


void Ciag(int n);

int main()
{
	int n;

	cout << "Ile wyrazow ciagu wypisac:" << endl;
	cin >> n;
	cout << endl;

	Ciag(n);

	return 0;
}

void Ciag(int n)
{
	int f0 = 0;
	int f1 = 1;
	int f; 

	for (int i = 0; i <= n; i++) {
		
		if (i > 1) {
			f = f0 + f1;
			f0 = f1;
			f1 = f;
		}
		else {
			f = i;
		}
		cout << f << endl;
		
	}
}
