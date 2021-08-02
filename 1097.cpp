#include <iostream>

using namespace std;

int main() {
    int i, j;
    for (i=1; i<=9; i=i+2) {
        for (j=6; j>=4; j--) {
            cout << "I=" << i << " J=" << j+i << endl;
        }
    }

    return 0;
}
