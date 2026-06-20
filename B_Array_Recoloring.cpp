#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <long long> v(n);
        long long mx = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(i > 0 && i < n-1)mx = max(mx,v[i]);
        }
        if(n == 2){
            cout << v[0] + v[1] << endl;
            continue;
        }
        if(k == 1){
            cout << max(mx + max(v.front(),v.back()),v.front()+v.back()) << endl;
            continue;
        }
        sort(v.rbegin(),v.rend());

        long long sm = 0;
        for (int i = 0; i <= k; i++){
            sm += v[i];
        }

        cout << sm << endl;
    }

    return 0;
}