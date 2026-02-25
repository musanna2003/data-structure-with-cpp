#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        set <char> st;
        vector <int> dp(n);
        for (int i=0; i < n; i++){
            char c ; cin >> c;
            st.insert(c);
            dp[i] = st.size();
        }
        
        long long ans = 0;
        for (int val : dp){
            ans += val;
        }
        cout << ans << endl;
    }

    return 0;
}