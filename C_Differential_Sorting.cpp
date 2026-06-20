#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        bool f = 1;
        for (int i = 0; i < n-1; i++){
            if (v[i] > v[i+1]) f = 0;
        }
        if (f){
            cout << 0 << endl;
            continue;
        }
        if(v[n-1] < v[n-2] || v[n-1] < 0){
            cout << -1 << endl;
            continue;
        }
        cout << n-2 << endl;
        for (int i = n-3; i >= 0; i--){
            cout << i+1 << ' ' << n-1 << ' ' << n;
            cout << endl;
        }
        
    }

    return 0;
}