#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;

    if(!(cin >> t)) return 0;

    while(t--){
        long long x, y;

        cin >> x >> y;

        cout << ((x - y != 1) ? "YES" : "NO") << endl;
    }

    return 0;
}