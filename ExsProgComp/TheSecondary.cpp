#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {

    double sum = 0.0;
    double M[12][12];
    char operation;

    cin >> operation;

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    cout << fixed << setprecision(1);

    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                if(j + i > 11){
                    sum += M[i][j];
                }
            }
    }

    if(operation == 'S'){
        cout << sum << endl;
    }else if(operation == 'M'){
        cout << sum/66 << endl;
    }
    
    return 0;
}