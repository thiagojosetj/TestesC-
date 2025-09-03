#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str, resultado;
    cin >> str;

    for(int i = 0; i < str.size(); i++){
        str[i] = tolower(str[i]);
    }

    for (char c : str) {
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            resultado.push_back('.');
            resultado.push_back(c);
        }
    }

    cout << resultado << endl;

    return 0;
}