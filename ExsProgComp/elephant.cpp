#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int friendsHouse;
    cin >> friendsHouse;
    int steps = friendsHouse/5;

    if(friendsHouse % 5 == 0){
        cout << steps << endl;
    }else{
        cout << steps + 1 << endl;
    }

    return 0;
}