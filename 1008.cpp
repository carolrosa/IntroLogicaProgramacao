#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main () {
    cout << fixed << setprecision (2);
    //definicao variaveis
    int NUMBER, WORKEDHOURS;
    double AMOUNTPERHOUR, SALARY;
    //entrada
    cin >> NUMBER;
    cin >> WORKEDHOURS;
    cin >> AMOUNTPERHOUR;
    //processamento
    SALARY = WORKEDHOURS * AMOUNTPERHOUR;
    //saída
    cout << "NUMBER = " << NUMBER << endl;
    cout << "SALARY = U$ " << SALARY << endl;

    return 0;
}
