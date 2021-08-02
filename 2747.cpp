#include <iostream>

using namespace std;

int main() {
    string traco, barra;
    traco = "---------------------------------------";
    barra = "|                                     |";

    cout << traco << endl;
    for (int i=1; i<=5; i++) {
        cout << barra << endl;
    }
    cout << traco << endl;

    return 0;
}
