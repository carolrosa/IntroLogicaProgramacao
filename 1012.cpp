#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C, pi;
    double triangulo, circulo, trapezio, quadrado, retangulo;
    cin >> A >> B >> C;
    triangulo = (A * C) /2;
    pi = 3.14159;
    circulo = pi * pow(C, 2);
    trapezio = ((A+B)*C)/2;
    quadrado = pow(B, 2);
    retangulo = A * B;

    cout << fixed << setprecision (3);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;

    return 0;
}
