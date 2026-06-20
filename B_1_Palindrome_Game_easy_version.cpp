#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int nn = 0;
        for(auto it : s) if(it == '1') nn++;
        if (nn == n) cout << "DRAW" << endl;
        else if (n % 2 == 1 && nn < n-1 && s[(n)/2] == '0') cout << "ALICE" << endl;
        else cout << "BOB" << endl;
    }

    return 0;
}