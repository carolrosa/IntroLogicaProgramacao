#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal, tempoIni, tempoFim, tempoTotal;
    int duracaoHora;

    cin >> horaInicial >> minutoInicial >> horaFinal >> minutoFinal;

    tempoIni = horaInicial*60 + minutoInicial;
    tempoFim = horaFinal*60 + minutoFinal;

    if (tempoIni < tempoFim) {
        tempoTotal = tempoFim - tempoIni;
    } else {
        tempoTotal = 24*60 - tempoIni + tempoFim;
    }

    duracaoHora = tempoTotal / 60;
    tempoTotal = tempoTotal % 60;

    cout << "O JOGO DUROU " << duracaoHora << " HORA(S) E " << tempoTotal << " MINUTO(S)" << endl;

    return 0;
}

