#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i, x;
    cin >> x;
    for (i=1; i<=x; i=i+2) {
        if (x <= 1000){
        cout << i << endl;
        }
    }
    return 0;
}
