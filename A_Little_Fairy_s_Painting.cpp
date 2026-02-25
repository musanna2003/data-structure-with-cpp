#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set <int> st;
        for (int i = 0; i < n; i ++){
            int val; cin >> val;
            st.insert(val);
        }
        int sz = st.size();
        while (!st.count(sz)){
            st.insert(sz);
            sz = st.size();
        }

        cout << sz << endl;
    }

    return 0;
}