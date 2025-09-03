#include <bits/stdc++.h>
using namespace std;

bool letraJaTentada(char letra, const vector<char>& letrasTentadas) {
    for (char l : letrasTentadas) {
        if (tolower(l) == tolower(letra)) {
            return true;
        }
    }
    return false;
}

int main() {

    int vidas = 6, acertos = 0, numAcertos = 0, errou = 0;
    string palavraEscolhida, palavraOculta[100];
    char letraEscolhida;
    vector<char> letrasTentadas;

    system("cls");
    cout << "===========================================" << endl;
    cout << "======= Bem vindo ao jogo da forca! =======" << endl;
    cout << "===========================================" << endl;
    cout << "Digite a palavra a ser adivinhada: ";
    cin >> palavraEscolhida;
    system("cls");

    for(int i = 0; i < (int)palavraEscolhida.size(); i++){
            palavraOculta[i] = '_';
        }

    while(vidas != 0 && acertos != palavraEscolhida.size()){
        cout << "Voce tem " << vidas << " vidas." << endl;
        cout << "Voce ja acertou " << acertos << " letras." << " de um total de " << palavraEscolhida.size() << " letras." << endl;
        cout << "Palavra: ";
        for(int i = 0; i < (int)palavraEscolhida.size(); i++){ 
            cout << palavraOculta[i];
        }
        cout << endl << "Digite a letra a ser testada: ";
        cin >> letraEscolhida;

        if (letraJaTentada(letraEscolhida, letrasTentadas)) {
            system("cls");
            cout << "Voce ja tentou essa letra! Escolha outra." << endl;
            continue;
        }

        letrasTentadas.push_back(letraEscolhida);

        numAcertos = 0;

        for(int i = 0; i < (int)palavraEscolhida.size(); i++){
            if(palavraEscolhida[i] == letraEscolhida){
                acertos++;
                numAcertos++;
                palavraOculta[i] = letraEscolhida;
            }
        }
        if(numAcertos == 0){
            vidas--;
            errou++;
        }
        system("cls");
    }

    if(acertos == palavraEscolhida.size()){
        cout << "Parabens, voce ganhou!" << endl;
    }else{
        cout << "Que pena, voce perdeu!" << endl;
    }
    cout << "Fim de jogo! A palavra era: " << palavraEscolhida << endl;
    cout << "Voce teve " << (6 - vidas) << " tentativas." << endl;
    cout << "Voce acertou " << acertos << " letras." << endl;
    cout << "Voce errou " << errou << " letras." << endl;

    return 0;
}