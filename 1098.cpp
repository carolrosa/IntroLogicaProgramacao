#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double i, j;
    for (i=0; i<=2; i=i+0.2) {
        for (j=1; j<=3; j=j+1) {
        cout << "I=" << i << " J=" << j << endl;
        }
    }
    return 0;
}
