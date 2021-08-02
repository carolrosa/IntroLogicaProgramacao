#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n, x, contIn, contOut;
    contIn=0;
    contOut=0;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> x;
            if (x>=10 and x<=20){
            contIn = contIn + 1;
            } else {
            contOut = contOut + 1;
            }
    }

    cout << contIn << " in" << endl;
    cout << contOut << " out" << endl;

    return 0;
}
