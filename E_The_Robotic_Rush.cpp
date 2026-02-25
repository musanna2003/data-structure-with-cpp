#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m,k; cin >> n >> m >> k;
        vector <long long> r(n),sp(m);
        for (int i = 0; i < n ; i++){
            cin >> r[i];
        }

        for (int i = 0; i < m ; i++){
            cin >> sp[i];
        }
        sort (r.begin(),r.end());
        sort (sp.begin(),sp.end());

        
    }
    

    return 0;
}