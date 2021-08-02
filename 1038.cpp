#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (2);

    int a, b, c, d, e, x, y;
    double total;
    cin >> x >> y;
    total = x * y;

    if (x == 1) {
        cout << "Total: R$ " << 4.00 * y << endl;
    } else if (x == 2) {
        cout << "Total: R$ " << 4.50 * y << endl;
    } else if (x == 3) {
        cout << "Total: R$ " << 5.00 * y << endl;
    } else if (x == 4) {
        cout << "Total: R$ " << 2.00 * y << endl;
    } else if (x == 5) {
        cout << "Total: R$ " << 1.50 * y << endl;
    }
    }
    return 0;
}
