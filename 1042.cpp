#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int vetor[10];
//           inicio; enquanto; incremento
    for (int i = 0; i<10; i = i+1) {
        cin >> vetor [i];
    } // i = i + 1

    sort (vetor, vetor+10);

    for (int i = 0; i<10; i++) { // i++ => i = i+1
        cout << vetor [i] << endl;
    }

    return 0;
}
