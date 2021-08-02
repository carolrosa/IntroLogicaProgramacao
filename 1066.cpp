#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int valor, contpar, contimpar, contpos, contneg;
    contpar=0;
    contimpar=0;
    contpos=0;
    contneg=0;

    for (int i=1; i<=5; i++) {
        cin >> valor;
        if (valor%2 == 0) {
            contpar = contpar + 1;
        } else if (valor%2 != 0) {
            contimpar = contimpar + 1;
        }
        if (valor > 0) {
            contpos = contpos + 1;
        } else if (valor < 0) {
            contneg = contneg + 1;
        }
    }
        cout << contpar << " valor(es) par(es)" << endl;
        cout << contimpar << " valor(es) impar(es)" << endl;
        cout << contpos << " valor(es) positivo(s)" << endl;
        cout << contneg << " valor(es) negativo(s)" << endl;

    return 0;
}
