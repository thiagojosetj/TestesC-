#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    
    stack <string> cartas;

    if(cartas.empty()) {
        cout << "A pilha esta vazia!" << endl;
    } else {
        cout << "A pilha nao esta vazia!" << endl;
    }

    cartas.push("Rei de Copas");
    cartas.push("Rei de Espadas");
    cartas.push("Rei de Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    cartas.pop();

    cout << "Tamanho da pilha: " << cartas.size() << endl;

    cartas.pop();

    cout << "Carta do topo: " << cartas.top() << endl;

    if(cartas.empty()) {
        cout << "A pilha esta vazia!" << endl;
    } else {
        cout << "A pilha nao esta vazia!" << endl;
    }

    return 0;
}