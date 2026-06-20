#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n),vv(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        vv = v;
        sort(v.begin(),v.end());
        cout << (v == vv? n : 1) << endl;
    }

    return 0;
}