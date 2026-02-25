#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n ; cin >> n;
        vector <int> v;
        map <int,int> mp;
        for (int i = 0; i < n; i++){
            int val; cin >> val;
            if (!mp.count(val)){
                v.push_back(val);
            }
            mp[val] = i+1;
        }
        int sz = v.size();
        int ans = -1;
        for (int i = sz-1; i >= 0; i --){
            for (int j = i; j >= 0; j --){
                if (__gcd(v[i],v[j]) == 1){
                    ans = max(ans,mp[v[i]] + mp[v[j]]);
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}