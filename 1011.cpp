#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int R;
    double pi, volume;
    cin >> R;
    pi = 3.14159;
    cout << fixed << setprecision (3);
    volume = (4.0/3) * pi * pow(R, 3);
    cout << "VOLUME = " << volume << endl;


    return 0;
}
