#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (2);
    //definicao variavel
    int productcode1, productcode2, productunits1, productunits2;
    double price1, price2;
    //entrada
    cin >> productcode1;
    cin >> productunits1;
    cin >> price1;
    cin >> productcode2;
    cin >> productunits2;
    cin >> price2;
    //processamento e saída
    cout << "VALOR A PAGAR: R$ " << (productunits1 * price1) + (productunits2 * price2) << endl;

    return 0;
}
