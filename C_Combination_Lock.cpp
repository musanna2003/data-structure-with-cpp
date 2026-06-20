#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n % 2 == 0){
            cout << -1 << endl;
            continue;
        }
        vector <int> v(n);
        int vl = 1;
        for (int i = 0; i < n; i += 2) v[i] = vl++;
        for (int i = 1; i < n; i += 2) v[i] = vl++;
        for (int i = 0; i < n; i += 1) cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}