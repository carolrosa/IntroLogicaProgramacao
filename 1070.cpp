#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int i, x;
    cin >> x;
    for (i=x; i<=x+11; i++) {
        if (x>0 and i%2 == 1){
        cout << i << endl;
        }
    }
    return 0;
}
