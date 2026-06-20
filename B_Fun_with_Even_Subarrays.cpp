#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        reverse(v.begin(),v.end());
        int ans = 0;
        for (int i = 1; i < n;){
            if(v[i] != v[0]){
                ans ++;
                i = (i)*2;
            }
            else i ++;
            
        }
        
        cout << ans << endl;
    }

    return 0;
}