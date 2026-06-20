#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n),vv(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i++) cin >> vv[i];

        vector <long long> dp,rm;
        map <long long, int> mp;

        for (int i = 0; i < n; i ++){
            if (v[i] > vv[i]) dp.push_back(v[i] - vv[i]);
            else mp[vv[i] - v[i]] ++;
        }

        // for (auto it : mp) cout << it.first << " " <<it.second << " ";
        // cout << endl;

        int cnt = 0;
        for (auto it : dp){
            auto lb = mp.lower_bound(it);
            if (lb != mp.end()){
                cnt ++;
                lb->second--;
                if (lb->second == 0) mp.erase(lb);
            }
        }
        int cnt2 = 0;
        for (auto it : mp) cnt2 += it.second;

        cout << cnt + (cnt2/2)  << endl;
    }

    return 0;
}