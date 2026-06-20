#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        map <char,int> mpf,mpb;
        vector <int> dpf(n),dpb(n);

        for (int i = 0; i < n; i++){
            mpf[s[i]] ++;
            dpf[i] = mpf.size();
        }

        for (int i = n-1; i >= 0; i--){
            mpb[s[i]] ++;
            dpb[i] = mpb.size();
        }

        int ans = 0;

        for (int i = 0; i < n-1; i++){
            ans = max(ans,dpf[i]+dpb[i+1]);
        }
        cout << ans << endl;
    }

    return 0;
}