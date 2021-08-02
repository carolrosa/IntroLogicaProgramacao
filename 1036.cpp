#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << fixed << setprecision (5);

    double A, B, C, R1, R2;
    cin >> A >> B >> C;

    R1 = (-B + (sqrt (pow (B, 2) - 4.0 * A*C))) / (2.0 * A);
    R2 = (-B - (sqrt (pow (B, 2) - 4.0 * A*C))) / (2.0 * A);



    if ((pow (B, 2) - 4*A*C < 0 or A == 0)) {
        cout << "Impossivel calcular" << endl;
    } else {
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }
    return 0;
}
