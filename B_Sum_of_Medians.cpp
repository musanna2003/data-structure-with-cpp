#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <long long> v(n*m);

        for (int i = 0; i < m*n; i++) cin >> v[i];

        long long cnt = 0;
        int i = n*m - (n/2) - 1;
        while (m--){
            // cout << i << " ";
            cnt += v[i];
            i -= n/2 + 1;
        }
        cout << cnt << endl;
    }

    return 0;
}