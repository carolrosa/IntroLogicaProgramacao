#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    string descDia;
    int diaInicial, diaFinal, horaInicial, minutoInicial, segundoInicial, horaFinal, minutoFinal, segundoFinal, x, y, diferenca;
    int dias, horas, minutos, segundos;
    char p;

    cin >> descDia >> diaInicial;
    cin >> horaInicial >> p >> minutoInicial >> p >> segundoInicial;
    cin >> descDia >> diaFinal;
    cin >> horaFinal >> p >> minutoFinal >> p >> segundoFinal;

    x = diaInicial*86400 + horaInicial*3600 + minutoInicial*60 + segundoInicial;
    y = diaFinal*86400 + horaFinal*3600 + minutoFinal*60 + segundoFinal;

    diferenca = y - x;

    dias = diferenca / 86400;
    diferenca = diferenca % 86400;

    horas = diferenca / 3600;
    diferenca = diferenca % 3600;

    minutos = diferenca / 60;
    diferenca = diferenca % 60;

    segundos = diferenca;

    cout << dias << " dia (s)" << endl;
    cout << horas << " hora (s)" << endl;
    cout << minutos << " minuto (s)" << endl;
    cout << segundos << " segundo (s)" << endl;

    return 0;
}
