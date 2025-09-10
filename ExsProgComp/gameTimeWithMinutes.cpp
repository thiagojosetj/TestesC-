#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {

    int h1 = 0, h2 = 0, min1 = 0, min2 = 0, total1 = 0, total2 = 0, totalTotal = 0, hFinal = 0, minFinal = 0;

    cin >> h1 >> min1 >> h2 >> min2;
    
    total1 = (h1 * 60) + min1;
    total2 = (h2 * 60) + min2;
    
    if(total1 > total2){
        return 0;
    }

    if(total1 == total2){
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
        return 0;
    }

    if(total1 > total2){
        total2 += 1440;
    }

    totalTotal = total2 - total1;
    
    hFinal = totalTotal / 60;
    minFinal = totalTotal % 60;

    cout << "O JOGO DUROU " << hFinal << " HORA(S) E " << minFinal << " MINUTO(S)" << endl;

    return 0;
}