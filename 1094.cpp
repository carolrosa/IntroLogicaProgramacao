#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main() {
  //  freopen("entrada1094.in","r",stdin);
    int n, amount;
    double somaC, somaR, somaS, somaT;
    string type;
    somaC=somaR=somaS=somaT=0;

    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> amount >> type;
        somaT = somaT + amount;

        if (type == "C") {
            somaC = somaC + amount;
        } else if (type == "R") {
            somaR = somaR + amount;
        } else if (type == "S") {
            somaS = somaS + amount;
        }
    }

    cout << "Total: " << somaT << " cobaias" << endl;
    cout << "Total de coelhos: " << somaC << endl;
    cout << "Total de ratos: " << somaR << endl;
    cout << "Total de sapos: " << somaS << endl;
    cout << fixed << setprecision (2);
    cout << "Percentual de coelhos: " << (somaC / somaT)*100 << " %" << endl;
    cout << "Percentual de ratos: " << (somaR / somaT)*100 << " %" << endl;
    cout << "Percentual de sapos: " << (somaS / somaT)*100 << " %" << endl;

    return 0;
}
