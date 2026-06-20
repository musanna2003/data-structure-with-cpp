#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;

        map <int,int> mp;
        vector <vector<int>> v(n);
        for(int i = 0; i < n; i++){
            int l; cin >> l;
            for (int j = 0; j < l; j++){
                int val; cin >> val;
                v[i].push_back(val);
                mp[val] ++;
            }
        } 
        if(mp.size() < m){
            cout << "NO" << endl;
            continue;
        }
        
        int cnt = 0;

        for (int i = 0; i < n; i++){
            for(auto it : v[i]){
                if (mp[it] == 1) {
                    cnt ++;
                    break;
                }
                
            }
        }
        //cout << cnt << endl;
        cout << (n-cnt >= 2 ? "YES" : "NO") << endl;
    }

    return 0;
}