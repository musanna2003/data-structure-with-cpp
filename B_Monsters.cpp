#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <pair<long long,long long>> v(n);
        for(int i = 0; i < n; i++){
            long long val; cin >> val;
            long long r = val % k;
            if (r == 0) r = k;
            v[i] = {-r,i};
        }

        sort(v.begin(),v.end());

        for (auto it : v) cout << it.second + 1 << " ";
        cout << endl;
        
    }

    return 0;
}