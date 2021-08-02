#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
    cout << fixed << setprecision (1);
    double matriz[12][12];
    int linha;
    char operacao;
    cin >> linha;
    cin >> operacao;

    for (int i=0; i<12; i++) {
        for (int j=0; j<12; j++) {
            cin >> matriz[i][j];
        }
    }

    int cont=0;
    double soma=0;
    for (int j=0; j<12; j++) {
            soma = soma + matriz[linha][j];
            cont = cont + 1;
    }

    if (operacao == 'S')
        cout << soma << endl;
    else
        cout << soma / cont << endl;

    return 0;
}
