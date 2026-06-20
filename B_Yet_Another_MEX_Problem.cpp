#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        set <int> st;
        for (int i = 0; i < n; i++){
            int val; cin >> val;
            st.insert(val);
        }
        int prev = 0;
        int ans = 0;
        bool f = 1;
        int idx = 0;
        for (auto it : st){
            idx ++;
            if (f){
                f = 0;
                if (it != 0) break;
                ans = 1;
                continue;
            }
            if (it -1 != prev) {
                ans = prev + 1;
                break;
            }
            if (idx == st.size()) ans = it + 1;
            prev = it;

        }
        cout << min(k-1,ans) << endl;
    }

    return 0;
}