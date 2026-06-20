#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        int idx = 0, mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (mx < v[i]){
                mx = v[i]; idx = i;
            }
        }
        bool f = 1;
        for (int i = 0; i < n; i++){
            if (i < idx){
                if (v[i] > v[i+1]) f = 0;
            }
            else if (i > idx){
                if (v[i] > v[i-1]) f = 0;
            }
        }

        cout << (f? "YES" : "NO") << endl;
    }

    return 0;
}