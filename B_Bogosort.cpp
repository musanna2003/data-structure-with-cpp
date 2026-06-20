#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i ++){
            cin >> v[i];
        }
        sort(v.rbegin(),v.rend());
        for (auto it : v) cout << it << " ";
        cout << endl;
    }

    return 0;
}