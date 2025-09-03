#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str1, str2;
    cin >> str1 >> str2;

    for(int i = 0; i < str1.size(); i++){
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }

    if(str1 < str2){
        cout << -1 << endl;
    }else if(str1 > str2){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}