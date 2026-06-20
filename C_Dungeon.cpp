#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <long long> a(n),b(m),c(m);
        multiset <long long> mst;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mst.insert(a[i]);
        }
        for (int i = 0; i < m; i++) cin >> b[i];
        for (int i = 0; i < m; i++) cin >> c[i];
        vector <pair<long long,long long>> v1,v2,v3;
        for (int i = 0; i < m; i++){
            if (c[i] == 0) v1.push_back({b[i],c[i]});
            else if (b[i] >= c[i]) v2.push_back({b[i],c[i]});
            else v3.push_back({b[i],c[i]});
        }
        sort (v1.begin(),v1.end());
        sort (v2.begin(),v2.end());
        sort (v3.begin(),v3.end());
        int ans = 0;
        for (auto it : v3){
            auto lb = mst.lower_bound(it.first);
            if(lb == mst.end()) break;
            mst.insert(max(it.second,*lb));
            mst.erase(lb);
            ans ++;
        }
        for (auto it : v2){
            auto lb = mst.lower_bound(it.first);
            if(lb == mst.end()) break;
            // mst.insert(max(it.second,*lb));
            ans ++;
        }
        for (auto it : v1){
            auto lb = mst.lower_bound(it.first);
            if(lb == mst.end()) break;
            mst.erase(lb);
            ans ++;
        }

        cout << ans << endl;
    }

    return 0;
}