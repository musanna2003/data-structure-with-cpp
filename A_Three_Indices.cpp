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
        bool f = 0;
        int i = 1;
        for (; i < n-1; i++){
            if (v[i-1] < v[i] && v[i] > v[i+1]){
                f = 1;
                break;
            }
        }
        
        if (f) cout << "YES\n" << i << " " << i+1 << " " << i+2 << endl;
        else cout << "NO\n";
    }

    return 0;
}