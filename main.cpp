#include <iostream>
using namespace std;
int main() {
   
    int n;

    cout << "quanto vale N?" << endl;
    cin >> n;
    int numeri[n];
    int i;

    i = 0;
    for (i = 0; i <= n - 1; i++) {
        numeri[i] = rand() % 100;
    }
    cout << "vettore generato con numeri casuali non ordinato:" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << numeri[i] << ", ";
    }
    cout << " " << endl;
    int x;
    int m;

    for (i = 1; i <= n - 1; i++) {
        x = i;
        while (x != 0) {
            if (numeri[x] < numeri[x - 1]) {
                m = numeri[x - 1];
                numeri[x - 1] = numeri[x];
                numeri[x] = m;
            }
            x = x - 1;
        }
    }
    cout << "vettore generato con numeri casuali ordinato:" << endl;
    for (i = 0; i <= n - 1; i++) {
        cout << numeri[i] << ", ";
    }
    cout << " " << endl;
    int nc;

    cout << "quale numero vuoi trovare?" << endl;
    cin >> nc;
    for (i = 0; i <= n - 1; i++) {
        if (numeri[i] == nc) {
            cout << "il numero che hai cercato è in posizione " << i + 1 << " ed è stato trovato utilizzando " << i + 1 << " tentativi" << endl;
        }
    }
    int d;

    d = (int) ((double) n / 2);
    int posizioni[d];
    int min;

    min = 0;
    int t;

    t = 0;
    while (numeri[d] != nc) {
        t = t + 1;
        if (nc > numeri[d]) {
            min = d;
            d = (int) ((double) (d + n) / 2);
        } else {
            n = d;
            d = (int) ((double) (min + n) / 2);
        }
    }
    cout << "il numero che hai cercato con la ricerca binaria è in posizione " << d + 1 << " ed è stato trovato utilizzando " << t + 1 << " tentativi" << endl;
    return 0;
}

