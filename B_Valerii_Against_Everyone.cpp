#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set <long long> st;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            st.insert(val);
        }

        cout << (st.size() == n? "NO" : "YES") << endl;
    }

    return 0;
}