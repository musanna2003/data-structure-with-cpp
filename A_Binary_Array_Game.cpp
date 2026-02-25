#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int > v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        cout << (v[0] == 1 || v[n-1] == 1 ? "Alice\n":"Bob\n");
    }

    return 0;
}