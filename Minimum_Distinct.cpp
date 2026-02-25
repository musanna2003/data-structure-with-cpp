#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <int> v(n);
        map <int,int> mp;
        int fa;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            if (i == 0) fa = v[i];
            mp[v[i]] ++;
        }
        vector <int> dp;
        for (auto it : mp){
            if (it.first != fa){
                dp.push_back(it.second);
            }
        }

        sort(dp.begin(),dp.end());
        int ref = 0;
        int ans = 0;
        for (int i = 0; i < dp.size(); i ++){
            ref += dp[i];
            if (ref <= k) ans = i + 1;
            else break;
        }
        cout << mp.size() - ans << endl;
        // for (auto it : mp){
        //     cout << it.first << "->" << it.second << endl;
        // }
        // cout << endl;

    }

    return 0;
}