#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int p, j1, j2, r, a, vencedor = 0;
    cin >> p >> j1 >> j2 >> r >> a;
    if ((r==1 and a==1) or r==a and (p==1 and (j1 + j2)%2==1) or (p==0 and (j1 + j2%2==0))) {
        cout << "Jogador 2 ganha!" << endl;
    } else {
        cout << "Jogador 1 ganha!" << endl;
    }

    return 0;
}
