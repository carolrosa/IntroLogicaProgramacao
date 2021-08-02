#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int X;
    double Y, consumo;
    cin >> X;
    cin >> Y;
    consumo = X / Y;
    cout << fixed << setprecision (3);
    cout << consumo << " km/l" << endl;

    return 0;
}
