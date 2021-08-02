#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (1);

    int n, i;
    double a, b, c, media;
    cin >> n;
    for (i=1; i<=n; i++){
        cin >> a >> b >> c;
        media = ((a*2) + (b*3) + (c*5)) / 10;
        cout << media << endl;
    }

    return 0;
}
