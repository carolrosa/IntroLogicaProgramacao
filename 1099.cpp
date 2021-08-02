#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    //freopen("entrada1099.in","r",stdin);
    int i, j, n, x, y, soma;
    cin >> n;

    for (i=1; i<=n; i++) {
        cin >> x >> y;

        if (x>y) {
            swap (x,y);
        }
        soma=0;

        for (j=x+1; j<y; j++) {
            if (j%2 != 0) {
            soma = soma + j;
            }
        }

        cout << soma << endl;
    }
    return 0;
}
