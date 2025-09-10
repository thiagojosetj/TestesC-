#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {

    long long totalSegDia = 0, dia = 0, hora = 0, minuto = 0, segundo = 0;
    long long totalSegDia2 = 0, dia2 = 0, hora2 = 0, minuto2 = 0, segundo2 = 0;
    long long dias = 0, horas = 0, minutos = 0, segundos = 0;
    long long totalSegundos = 0;
    string input;
    char sep;

    cin >> input >> dia;
    cin >> hora >> sep >> minuto >> sep >> segundo;
    cin >> input >> dia2;
    cin >> hora2 >> sep >> minuto2 >> sep >> segundo2;

    totalSegDia = ((dia * 86400) + (hora * 3600) + (minuto * 60) + segundo);
    totalSegDia2 = ((dia2 * 86400) + (hora2 * 3600) + (minuto2 * 60) + segundo2);

    totalSegundos = totalSegDia2 - totalSegDia;

    dias = totalSegundos / 86400;
    totalSegundos = totalSegundos % 86400;

    horas = totalSegundos / 3600;
    totalSegundos = totalSegundos % 3600;

    minutos = totalSegundos / 60;
    totalSegundos = totalSegundos % 60;

    segundos = totalSegundos;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}