#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i, cont;
    double valor;
    cont=0;

    for (i=1; i<=6; i++) {
        cin >> valor;
        if (valor > 0) {
            cont = cont + 1;
        }
    }

    cout << cont << " valores positivos" << endl;

    return 0;
}
