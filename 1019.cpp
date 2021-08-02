#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int N, hour, minute, second;

    cin >> N;

    hour = N / 3600;
    N = N % 3600;

    minute = N / 60;
    N = N % 60;

    second = N;

    cout << hour << ":" << minute << ":" << second << endl;

    return 0;
}
