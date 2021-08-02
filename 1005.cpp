#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (5);
    //definicao variaveis
    double A, B, MEDIA;
    //entrada
    cin >> A >> B;
    //processamento e saida
    cout << "MEDIA = " << (A*3.5 + B*7.5)/11 << endl;

    return 0;
}
