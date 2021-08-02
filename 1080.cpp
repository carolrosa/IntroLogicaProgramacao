#include <iostream>

using namespace std;

int main() {
    int i, valor, maiorValor=0, posicao=0;

    for (i=1; i<=100; i++) {
        cin >> valor;
        if (valor > maiorValor) {
            maiorValor = valor;
            posicao = i;
        }
    }

    cout << maiorValor << endl;
    cout << posicao << endl;

    return 0;
}
