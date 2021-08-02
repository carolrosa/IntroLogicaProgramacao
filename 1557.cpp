#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i, j, n, matriz[15][15], digitos;
    cin >> n;

    while (n!=0) {
    //preenchimento da matriz
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                matriz[i][j]=pow(2,i+j);
            }
        }
        int maior = matriz[n-1][n-1];

        //contar quantos digitos o maior valor possui
        digitos=0;
        while (maior!=0) {
            digitos++;
            maior = maior/10;
        }

        //formatar a matriz
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                if (j==0) {
                    cout << setw(digitos) << matriz[i][j];
                } else {
                    cout << " " << setw(digitos) << matriz[i][j];
                }
            }
            cout << endl;
        }
        cout << endl;
        cin >> n;
    }
    return 0;
}
