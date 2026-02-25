#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <int> v(n);
        for (int i = 0; i < n; i ++){
            cin >> v[i];
        }
        string s; cin >> s;

        int nm = 0;
        int sm = 0;
        for (int i = 0; i < n; i ++){
            if (s[i] == '1') sm += v[i];
            else nm += v[i];
        }

        cout << (nm >= k && sm > k? nm + sm - k : nm) << endl;
    }

    return 0;
}