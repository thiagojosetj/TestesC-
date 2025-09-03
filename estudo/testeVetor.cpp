#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n[5];

    for(int i = 0; i < sizeof(n)/4; i++){
        cin >> n[i];
    }

    int tam;
    cin >> tam;
    int m[tam];
    for(int i = 0; i < tam; i++){
        cin >> m[i];
    }

    for(int i = 0; i < tam; i++){
        cout << m[i] << n[i] << " ";
    }

    return 0;
}