#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> va(n),vb(n),ans;
        for (int i = 0; i < n; i++) cin >> va[i];
        for (int i = 0; i < n; i++) cin >> vb[i];

        long long mx = LONG_LONG_MIN;
        for (int i = 0; i < n; i++){
            mx = max(mx,va[i] - vb[i]);
        }

        for (int i = 0; i <n; i ++){
            if (va[i] - vb[i] >= mx) ans.push_back(i+1);
        }

        cout << ans.size() << endl;
        for (auto i : ans) cout << i << " ";
        cout << endl;
    }

    return 0;
}