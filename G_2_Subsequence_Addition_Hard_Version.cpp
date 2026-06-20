#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(),v.end());

        if (v[0] != 1) {
            cout << "NO" << endl;
            continue;
        }

        long long sm = 1;
        bool f = 0;
        for (int i = 1; i < n; i++){
            if (v[i] > sm) {
                f = 1;
                break;
            }
            sm += v[i];
        }

        cout << (f? "NO" : "YES") << endl;
    }

    return 0;
}