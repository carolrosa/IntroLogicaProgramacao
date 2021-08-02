#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double valor;
    int reais;
    int N100, N50, N20, N10, N5, N2, N1;
    cin >> valor;
    cout << valor << endl;
    reais = valor;

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

    N1 = reais / 1;
    reais = reais % 1;

    cout << N100 << " nota(s) de R$ 100,00" << endl;
    cout << N50 << " nota(s) de R$ 50,00" << endl;
    cout << N20 << " nota(s) de R$ 20,00" << endl;
    cout << N10 << " nota(s) de R$ 10,00" << endl;
    cout << N5 << " nota(s) de R$ 5,00" << endl;
    cout << N2 << " nota(s) de R$ 2,00" << endl;
    cout << N1 << " nota(s) de R$ 1,00" << endl;
    return 0;
}
