#include <bits/stdc++.h>
using namespace std;

int soma(int n1, int n2);

void tr(string tra[8], int tamanho);

int main() {
    ios::sync_with_stdio(false);

    int num1, num2;
    string tra[8];

    cout << "Informe dois numeros: ";
    cin >> num1 >> num2;

    cout << "A soma e: " << soma(num1, num2) << endl;

    for(int i = 0; i < 8; i++){
        cout << "Informe o valor de tra[" << i << "]: ";
        cin >> tra[i];
    }

    cout << "Os valores do array são:" << endl;
    tr(tra, 8);

    return 0;
}

//-------------funções------------


int soma(int n1, int n2){
    return n1 + n2;
}

void tr(string tra[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        cout << tra[i] << endl;
    }
}