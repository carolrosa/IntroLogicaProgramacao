#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double valor, soma, cont;
    cont=0;
    soma=0;
    for (double i=1; i<=6; i++) {
        cin >> valor;
        if (valor > 0) {
            cont = cont + 1;
            soma = soma + valor;
        }
    }

    cout << cont << " valores positivos" << endl;
    cout << fixed << setprecision (1);
    cout << soma / cont << endl;

    return 0;
}
