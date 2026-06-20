#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,x,y; cin >> n >> x >> y;
        string s; cin >> s;
        long long c4 = 0,c8 = 0;
        if (abs(x) > n || abs(y) > n ) {
            cout << "NO" << endl;
            continue;
        }
        for (auto ch : s){
            if (ch == '4') c4 ++;
            else c8++;
        }

        if (c4 + 2 * c8 < abs(x) + abs(y) || c4 + c8  < max(abs(x),abs(y))) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}