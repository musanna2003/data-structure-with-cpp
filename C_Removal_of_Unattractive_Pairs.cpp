#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        
        map <char,int> mp;
        int mx = 0;

        for (auto c : s){
            mp[c] ++;
            mx = max(mp[c],mx);
        }

        if(mx <= n/2) cout << 0 + (n%2 == 1) << endl;
        else cout << 2*mx - n << endl;
    }

    return 0;
}