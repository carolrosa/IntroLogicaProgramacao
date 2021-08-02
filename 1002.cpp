#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ///funcoes do cmath
    /// pow (x,3) : elevando x ao cubo
    /// sqrt (square root raiz quadrada)
    /// x = sqrt (2) raiz quadrada de 2

    cout << fixed << setprecision (4);
    double pi,A,R;
    pi = 3.14159;
    cin >> R;
    A = pi * pow(R,2);
    cout << "A=" << A << endl;

    return 0;
}
