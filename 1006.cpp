#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (1);
    //definicao variaveis
    double A, B, C, MEDIA;
    //entrada
    cin >> A >> B >> C;
    //processamento e saida
    cout << "MEDIA = " << (A*2 + B*3 + C*5)/10 << endl;

    return 0;
}
