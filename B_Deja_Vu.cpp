#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        map <int,int> mp;
        vector <int> vv;
        for (int i = 0; i < m; i ++){
            int val; cin >> val;
            if(!mp.count(val))vv.push_back(val);
            mp[val] ++;

        }

        for (auto it : vv){
            for (int i = 0; i < n;i ++){
                if (v[i] % (1LL << it) == 0) v[i] = v[i] + (1LL << (it-1));
            }
        }

        for (auto it : v) cout << it << " ";
        cout << endl;
    }

    return 0;
}