#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string word;
    cin >> word;

    if(!isupper(word[0]))
    word[0] = toupper(word[0]);

    cout << word << endl;

    return 0;
}