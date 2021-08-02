#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int i, N[20];

    for (i=0; i<20; i++) {
        cin >> N[i];
    }

    for (i=0; i<20; i++) {
        cout << "N[" << i << "]=" << N[19-i] << endl;
    }

    return 0;
}
