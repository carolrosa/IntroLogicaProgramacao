#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double valor;
    int reais, centavos;
    int N100, N50, N20, N10, N5, N2;
    int M1, M50c, M25c, M10c, M5c, M1c;
    cin >> valor;
    reais = valor;
    centavos = (valor-reais+0.005) * 100;

    N100 = reais / 100;
    reais = reais % 100;

    N50 = reais / 50;
    reais = reais % 50;

    N20 = reais / 20;
    reais = reais % 20;

    N10 = reais / 10;
    reais = reais % 10;

    N5 = reais / 5;
    reais = reais % 5;

    N2 = reais / 2;
    reais = reais % 2;

    cout << "NOTAS:" << endl;
    cout << N100 << " nota(s) de R$ 100.00" << endl;
    cout << N50 << " nota(s) de R$ 50.00" << endl;
    cout << N20 << " nota(s) de R$ 20.00" << endl;
    cout << N10 << " nota(s) de R$ 10.00" << endl;
    cout << N5 << " nota(s) de R$ 5.00" << endl;
    cout << N2 << " nota(s) de R$ 2.00" << endl;

    M1 = reais;

    M50c = centavos / 50;
    centavos = centavos % 50;

    M25c = centavos / 25;
    centavos = centavos % 25;

    M10c = centavos / 10;
    centavos = centavos % 10;

    M5c = centavos / 5;
    centavos = centavos % 5;

    M1c = centavos;

    cout << "MOEDAS:" << endl;
    cout << M1 << " moeda(s) de R$ 1.00\n";
    cout << M50c << " moeda(s) de R$ 0.50\n";
    cout << M25c << " moeda(s) de R$ 0.25\n";
    cout << M10c << " moeda(s) de R$ 0.10\n";
    cout << M5c << " moeda(s) de R$ 0.05\n";
    cout << M1c << " moeda(s) de R$ 0.01\n";

    return 0;
}
