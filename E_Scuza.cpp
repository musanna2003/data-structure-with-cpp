#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,q; cin >> n >> q;
        vector <long long> v(n);
        map <long long, long long> mp;
        set <long long> st;
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        long long sm = 0,mx = 0;
        for (int i = 0; i < n; i++){
            sm += v[i];
            mx = max(mx,v[i]);
            mp[mx] = sm;
            st.insert(mx);
        }

        while (q--){
            long long val; cin >> val;
            auto ub = st.upper_bound(val);
            if (ub == st.begin()) {
                cout << 0 << " ";
            }
            else {
                cout << mp[*prev(ub)] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}