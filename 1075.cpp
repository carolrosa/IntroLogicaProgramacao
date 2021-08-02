#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;
    n<10000;
    cin >> n;

    for (int i=1; i<=10000; i++) {
        if (i%n == 2) {
        cout << i << endl;
        }
    }

    return 0;
}
