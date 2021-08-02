#include <iostream>

using namespace std;

int main() {
    int x, y, soma;
    soma=0;
    cin >> x >> y;
    if (x>y) {
        swap(x,y);
    }

    for (int i=x+1; i<y; i++) {
        if (i%2 != 0) {
        soma = soma + i;
        }
    }

    cout << soma << endl;

    return 0;
}
