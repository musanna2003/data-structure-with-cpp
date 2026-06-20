#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <int> v(n*n);
        for (int i = 0; i < n*n; i++){
            cin >> v[i];
        }
        long long cnt = 0;

        for (int i = 0; i <(n*n)/2; i++){
            if (v[i] != v[n*n-1-i]) cnt ++;
        }

        if (cnt > k || (n%2 == 0 && k-cnt%2 == 1)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}