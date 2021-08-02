#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int A, B, C, MaiorAB, MaiorABC;
    cin >> A >> B >> C;
    MaiorAB = (A+B+abs(A-B))/2;
    MaiorABC = (MaiorAB + C + abs(MaiorAB - C))/2;
    cout << MaiorABC << " eh o maior" << endl;

    return 0;
}
