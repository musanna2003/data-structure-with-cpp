#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        set <int> st;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            st.insert(v[i]);
        }

        if (st.size() != n){
            cout << -1 << endl;
        }
        else{
            sort(v.rbegin(),v.rend());
            for (auto it : v) cout << it << " ";
            cout << endl;
        }
    }

    return 0;
}