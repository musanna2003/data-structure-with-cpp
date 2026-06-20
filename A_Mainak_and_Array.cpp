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
        int ans = 0;
        for (int i = 0; i < n; i++){
            if (i == 0) ans = max(ans,v[i] - v[0]); 
            else ans = max(ans,v[i-1] - v[i]); 
        }
        for (int i = 1; i < n; i++){
            ans = max(ans,v[i] - v[0]); 
        }
        for (int i = 0; i < n-1; i++){
            ans = max(ans,v[n-1] - v[i]); 
        }
        cout<< ans << endl;
    }

    return 0;
}