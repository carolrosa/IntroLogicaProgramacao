#include <iostream>

using namespace std;

int main() {
    int nc, n, Fib[61];
    cin >> nc;

    Fib[0]=0;
    Fib[1]=1;
    /*Fib[2]=Fib[1]+Fib[0]*/

    for (int i=2; i<=58; i++) {
        Fib[i]=Fib[i-1]+Fib[i-2];
    }


    for (int i=0; i<nc; i++) {
        cin >> n;
        cout << "Fib(" << n << ") = " << Fib[n] << endl;
    }

    return 0;
}
