#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int S, T, F, localTime, time;
    cin >> S >> T >> F;
    time = S + T + F;

    if (time > 0 and time < 24) {
        localTime = time;
    } else if (time < 0) {
        localTime = time + 24;
    } else if (time > 24) {
        localTime = time - 24;
    } else {
        localTime = 0;
    }

    cout << localTime << endl;

    return 0;
}
