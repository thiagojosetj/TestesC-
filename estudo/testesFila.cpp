#include <bits/stdc++.h>
using namespace std;

int main() {
    
    queue <string> cartas;

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da fila: " << cartas.size() << endl;

    while (!cartas.empty())
    {
        cout << "Primeira carta: " << cartas.front() << endl;
        cout << "Ultima carta: " << cartas.back() << endl;
        cartas.pop();
    }
    
    return 0;
}