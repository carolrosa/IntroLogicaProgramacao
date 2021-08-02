#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int age, years, months, days;
    cin >> age;

    years = age / 365;
    age = age % 365;

    months = age / 30;
    age = age % 30;

    days = age;

    cout << years << " ano (s)" << endl;
    cout << months << " mes (es)" <<endl;
    cout << days << " dia (s)" << endl;

    return 0;
}
