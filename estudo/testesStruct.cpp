#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct Carro {
    string nome, cor;
    int pot, velMax, vel;

    void insere(string n, string c, int p, int v) {
        nome = n;
        cor = c;
        pot = p;
        velMax = v;
        vel = 0;
    }

    void mostrar(){
        cout << "Nome: " << nome << endl;
        cout << "Cor: " << cor << endl;
        cout << "Potencia: " << pot << endl;
        cout << "Velocidade Atual: " << vel << endl;
        cout << "Velocidade Maxima: " << velMax << endl;
    }

    void mudaVel(int v){
        vel = v;
        if(v > velMax) vel = velMax;
        if(v < 0) vel = 0;
    }

};

int main() {

    Carro car1, car2;

    car1.insere("Tornado", "Vermelho", 450, 350);

    car2.insere("Fusca", "Azul", 300, 280);


    car1.mostrar();
    cout << endl << "Velocidade Maxima: " << car1.velMax << endl;

    car2.mostrar();
    cout << endl << "Velocidade Maxima: " << car2.velMax << endl;

    car1.mudaVel(400);
    car1.mostrar();

    return 0;
}