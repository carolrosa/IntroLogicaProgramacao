#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n, x, null, positive, negative, even, odd;
    n<10000;
    cin >> n;

    for (int i=1; i<=n; i++) {
        cin >> x;
            if (x == 0) {
            cout << "NULL" << endl;
            } else {
                if (x%2 == 0) {
                cout << "EVEN ";
                } else {
                cout << "ODD ";
            }
                if (x>0) {
                cout << "POSITIVE" << endl;
                } else {
                cout << "NEGATIVE" << endl;
                }
            }
    }
    return 0;
}
