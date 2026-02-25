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
        int j = n;

        for (int i = n-1; i >= 0; i--){
            if (v[i] != j) break;
            j --;
        }
        if (j == 0) cout << 0 << endl;
        else cout << v[j-1] << endl;
    }

    return 0;
}