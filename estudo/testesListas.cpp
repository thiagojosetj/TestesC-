#include <bits/stdc++.h>
using namespace std;

int main() {
    
    list<int> aula, teste;
    int tam = 10;
    list<int>::iterator it;

    teste.push_back(9);
    teste.push_back(9);
    teste.push_back(9);
    teste.push_back(9);

    for(int i = 0; i < tam; i++){
        aula.push_front(i);
    }

    it=aula.begin();
    advance(it, 3);
    aula.insert(it, 0);
    aula.erase(--it);

    aula.merge(teste);

    cout << "Tamanho da lista: " << aula.size() << endl;

    tam = aula.size();
    for(int i = 0; i < tam; i++){
        cout << aula.front() << " ";
        aula.pop_front();
    }

    tam = teste.size();
    cout << "\nTamanho da lista: " << teste.size() << endl;

    for(int i = 0; i < tam; i++){
        cout << teste.front() << " ";
        teste.pop_front();
    }
    return 0;
}