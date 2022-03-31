#include <iostream>
using namespace std;

int main()
{
    int n;
    int lp = 0;
    int p = 2;
    int d;

    cout << "Ile liczb pierwszych chcesz wyswietlic:" << endl;
    cin >> n;

    while (lp < n) {
        for (d = 2; d <= p - 1; d++) {
            if (p % d == 0)
                p = p + 1;
            else
                cout << p << "jest pierwsze" << endl;
                lp = lp + 1;

        
        }
    }
}