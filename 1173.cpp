#include <iostream>

using namespace std;

int main() {
    int x, vet[10], i;

    cin >> x;
    /// x = vet[0];
    vet[0] = x;
    /// vet[0]=1;
    cout << "N[" << 0 << "] = " << vet[0] << endl;

    for (i=1; i<10; i++) {
        vet[i] = vet[i-1] * 2;
        cout << "N[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}
