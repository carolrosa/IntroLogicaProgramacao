#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (A<B) {
        swap (A,B);
    }
    if (B<C) {
        swap (B,C);
    }
    if (A<B) {
        swap (A,B);
    }

    if ( A >= B + C ) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
    if ( pow(A,2) == (pow(B,2) + pow(C,2)) ) {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if ( pow(A,2) > (pow(B,2) + pow(C,2)) ) {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if ( pow(A,2) < (pow(B,2) + pow(C,2)) ) {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }
    if ( A == B and B == C ) {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    if ( (A == B and A!= C) or (A == C and A!= B) or (B == C and B!= A)) {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    }

    return 0;
}
