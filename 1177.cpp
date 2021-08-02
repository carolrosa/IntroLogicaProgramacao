#include <iostream>

using namespace std;

int main() {
    int i, T, N[5];
    cin >> T;

    for (i=0; i<5; i++) {
        N[i] = N[i-1];
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
