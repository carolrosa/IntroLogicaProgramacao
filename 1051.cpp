#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (2);

    double salario, imposto1, imposto2, imposto3, impostoFinal;
    cin >> salario;

    imposto2 = (salario - 3000) * 0.18;
    imposto3 = (salario - 4500) * 0.28;

    if (salario <= 2000) {
        cout << "Isento" << endl;
    } else {
    if (salario > 2000 and salario <= 3000) {
        imposto1 = salario - 2000;
        impostoFinal = imposto1 * 0.08;
    } else if (salario > 3000 and salario <= 4500) {
        imposto1 = 1000 * 0.08;
        imposto2 = salario - 3000;
        impostoFinal = imposto1 + imposto2 * 0.18;
    } else {
        imposto1 = 1000 * 0.08;
        imposto2 = 1500 * 0.18;
        imposto3 = salario - 4500;
        impostoFinal = imposto1 + imposto2 + imposto3 * 0.28;
    }
    cout << "R$ " << impostoFinal << endl;
    }
    return 0;
}

