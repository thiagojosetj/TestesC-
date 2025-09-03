#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L, C;
    cin >> L >> C;
    int array[L][C];

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            cin >> array[i][j];
        }
    }

    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            cout << setfill('0') << setw(2) << array[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}