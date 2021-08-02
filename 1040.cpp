#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision (1);

    double N1, N2, N3, N4, Media, Exame, MediaFinal;
    cin >> N1 >> N2 >> N3 >> N4;

    Media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4)) / 10;
    cout << "Media: " << Media << endl;

    if (Media >= 7.0) {
    cout << "Aluno aprovado." << endl;
    } else if (Media < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;

    cin >> Exame;
    cout << "Nota do exame: " << Exame << endl;

    MediaFinal = ((Media + Exame) / 2);

    if ( MediaFinal >= 5.0 ) {
        cout << "Aluno aprovado." << endl;
    } else {
        cout << "Aluno reprovado." << endl;
        }
    cout << "Media final: " << MediaFinal << endl;
    }

return 0;
}
