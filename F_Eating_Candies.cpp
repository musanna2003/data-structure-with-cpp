#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        long long sm = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sm += v[i];
        }

        map<long long,int> mp;
        long long ts = 0;
        for (int i = n-1; i >= 0; i--){
            ts += v[i];
            if (ts <= sm/2) mp[ts] = n-i;
            else break;
        }

        int ans = 0;
        ts = 0;
        if (mp.size() == 0) {
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++){
            ts += v[i];
            if(mp.count(ts)) ans = mp[ts] + i+1;
        }
        cout << ans << endl;
        
    }

    return 0;
}