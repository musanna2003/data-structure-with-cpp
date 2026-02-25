#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m,h; cin >> n >> m >> h;
        vector <long long> v(n),vb(m),vc(m);
        for (int i = 0;i < n; i ++){
            cin >> v[i];
        }
        
        for (int i = 0;i < m; i ++){
            cin >> vb[i];
            cin >> vc[i];
        }
        int lc = -1;
        map <long long, long long> mp;
        for (int i = 0; i < m; i++) {
            mp[vb[i]] += vc[i];
            if (v[vb[i]-1] + mp[vb[i]] > h) mp.clear();
        }

        for (auto it : mp){
            v[it.first -1] += it.second;
        }
        for (long long vl : v){
            cout << vl << " ";
        }
        cout << endl;
    }

    return 0;
}