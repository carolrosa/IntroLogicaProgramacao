#include <iostream>
#include <cstdio>
#include <iomanip>
#define linhas 12
#define colunas 12

using namespace std;

int main() {
    //freopen ("entrada1183.in","r",stdin);
    cout << fixed << setprecision (1);
    double matriz[linhas][colunas];

    char operacao;
    cin >> operacao;

    for (int i=0; i<linhas; i++) {
        for (int j=0; j<colunas; j++) {
            cin >> matriz [i][j];
        }
    }

    int cont=0;
    double soma=0;
    for (int i=0; i<=10; i++) {
        for (int j=i+1; j<colunas; j++) {
            soma = soma + matriz[i][j];
            cont = cont + 1;
        }
    }

    if (operacao == 'S')
        cout << soma << endl;
    else
        cout << soma / cont << endl;

    return 0;
}

