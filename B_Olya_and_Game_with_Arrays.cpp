#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <vector<long long>> v(n);
        for (int i = 0; i < n; i++){
            int m; cin >> m;
            for (int j = 0; j < m; j ++){
                long long val; cin >> val;
                v[i].push_back(val);
            }
        }

        vector <pair<long long,long long>> vp(n);

        for (int i = 0; i < n; i++){
            sort(v[i].begin(),v[i].end());
            vp[i] = {v[i][0],v[i][1]};
        }

        sort(vp.begin(),vp.end());

        long long ans = vp[0].first;
        long long sm = 0;
        for (int i = 0; i < n; i ++){
            sm += vp[i].second;
        }

        for (int i = 0; i < n; i ++){
            ans = max(ans,sm - vp[i].second + vp[0].first);
        }

        cout << ans << endl;
    }

    return 0;
}