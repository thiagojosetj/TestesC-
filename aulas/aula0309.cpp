#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while(t--) {

        long long x, y;
        cin >> x >> y;

        long long k = max(x, y), k1 = (k -1) * (k -1), k2 = k1 * k1, ans = 0;

        if(k % 2 == 0){
            if(x == k){
                ans = k2 - (y - 1);
            }else{
                ans = k1 + x;
            }
        }else{
            if(y == k){
                ans = k2 - (x - 1);
            }else{
                ans = k1 + y;
            }
        }

            cout << ans << "\n";


    }
    return 0;
}

