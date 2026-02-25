#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        int mn = INT_MAX;
        for (int i = 0; i < n-1; i++){
            mn = min(mn,v[i] + v[i+1]);
        }
        cout << mn << endl;
    }

    return 0;
}   