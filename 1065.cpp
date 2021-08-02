#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int valor, cont;
    cont=0;
    for (int i=1; i<=5; i++) {
        cin >> valor;
        if (valor%2 == 0) {
            cont = cont + 1;
        }
    }

    cout << cont << " valores pares" << endl;

    return 0;
}
