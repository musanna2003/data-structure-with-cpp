#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        string s; cin >> s;
        int wt = 0;
        for (int i = 0 ; i < k; i++){
            if (s[i] == 'W') wt++;
            
        }
        // cout << wt << endl;
        int mn = wt;
        for (int i = 1 ; i < n-k+1; i++){
            if (s[i-1] == 'W') wt --;
            if (s[i+k-1] == 'W') wt ++;
            mn = min(mn,wt);
        }
        cout << mn << endl;
    }

    return 0;
}