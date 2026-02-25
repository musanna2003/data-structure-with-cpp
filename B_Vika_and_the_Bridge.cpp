#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        map <int , vector <int>> mp;

        for (int i = 1; i <= n; i++){
            int val; cin >> val;
            mp[val].push_back(i);
        }

        int ans = INT_MAX;

        for (auto it : mp){
            vector <int> tm;
            vector <int> v = it.second;
            for (int i = 0;i< v.size(); i ++){
                // cout << v << " ";
                if (tm.empty()){
                    tm.push_back(v[i]-1);
                    tm.push_back((n+1)-v[i]-1);
                }
                else{
                    tm[tm.size()-1] = v[i] - v[i-1] - 1;
                    tm.push_back((n+1)-v[i]-1);
                }
            }
            sort(tm.rbegin(),tm.rend());
            ans = min (ans,max(tm[1],(tm[0])/2));
            // for (int v : tm) cout << v << " ";
            // cout << endl;
            
        }

        cout << ans << endl;
    }

    return 0;
}