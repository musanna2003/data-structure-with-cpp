#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int ca = 0, cb = 0;
        for (auto c : s){
            if (c == 'a') ca++;
            else cb++;
        }
        map <int,int> mp;
        int sm = ca - cb;
        int pf = 0;
        mp[pf] = -1;
        int ans = n;
        for (int i =0; i < n; i++){
            if(s[i] == 'a') pf += 1;
            else pf -= 1;
            mp[pf] = i;
            if(mp.count(pf - sm)){
                ans = min(ans,i - mp[pf-sm]);
            }
        }

        if(ans == n) cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}