#include <iostream>

using namespace std;

int main() {
    int i, j, n, matriz[70][70];
    cin >> n;

    while (n!=0) {
        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                cin >> matriz[i][j];
            }
        }

        for (i=0; i<n; i++) {
            for (j=0; j<n; j++) {
                cout << matriz[i][j];
            }
        }
    }
    /* for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            cout << result[i][j];
        }
    } */

    return 0;
}
