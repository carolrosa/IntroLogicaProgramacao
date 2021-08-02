#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int hours, speed;
    double distance, liters;

    cin >> hours >> speed;

    distance = hours * speed;
    liters = distance / 12;

    cout << fixed << setprecision (3);
    cout << liters << endl;

    return 0;
}
