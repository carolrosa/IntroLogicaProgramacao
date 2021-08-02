#include <iostream>

using namespace std;

int main() {
    int n2, n1;

    cin >> n2 >> n1;

    if (n1 < 3) {
        cout << "nova" << endl;
    } else if (n1 > 96) {
        cout << "cheia" << endl;
        } else {
            if (n2 < n1) {
                cout << "crescente" << endl;
            } else {
                cout << "minguante" << endl;
                }

            }

    return 0;
}
