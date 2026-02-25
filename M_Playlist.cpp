#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    unordered_set<long long> st;
    st.reserve(n);
    st.max_load_factor(0.7);

    int l = 0, sc = 0;

    for (int r = 0; r < n; r++) {
        while (st.count(v[r])) {
            st.erase(v[l]);
            l++;
        }
        st.insert(v[r]);
        sc = max(sc, r - l + 1);
    }

    cout << sc;
    return 0;
}