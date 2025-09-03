#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        long long cur = 0, ans = 0;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            if (x == 0) ans = max(ans, ++cur);
            else cur = 0;
        }
        cout << ans << "\n";
    }
    return 0;
}
