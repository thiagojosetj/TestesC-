#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Digite o tempo desejado em segundos: ";
    int n = 0;
    int tempoDesejado;
    cin >> tempoDesejado;

    while(n < tempoDesejado){
        cout << ++n << endl;
        this_thread::sleep_for(chrono::milliseconds(1000));
    }

    return 0;
}