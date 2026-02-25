#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        vector<long long> pre(n+1, 0),suf(n+1,0);
        long long ans = LLONG_MIN;
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        for (int i = 0; i < n; i ++){
            if (i == 0){
                pre[i+1] = v[i];
            }
            else {
                pre[i+1] = pre[i]+abs(v[i]);
            }
        }
        for (int i = n-1; i >= 0; i--) {
            suf[i] = suf[i+1] + v[i];
        }

        for (int i = 0; i < n; i++){
            ans = max(ans, pre[i] - suf[i+1]);
        }
        cout << ans << "\n";
    }

    return 0;
}
