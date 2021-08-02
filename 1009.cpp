#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (2);
    //definicao
    double SALARIO, VENDAS, SALARIOFINAL;
    string NOME;
    //entrada
    cin >> NOME;
    cin >> SALARIO;
    cin >> VENDAS;
    //processamento e saida
    SALARIOFINAL = SALARIO + VENDAS * 0.15;
    cout << "TOTAL = R$ " << SALARIOFINAL << endl;



    return 0;
}
