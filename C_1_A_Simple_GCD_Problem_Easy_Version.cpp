#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n), vv(n);
        for (int i = 0; i <n; i++){
            cin >> v[i];
        }

        for (int i = 0; i <n; i++){
            cin >> vv[i];
        }

        int cnt = 1;
        if (v[v.size() - 1] == v[v.size()-2]) {
            cnt = 0;
        }
        for (int i = 0; i < n-1; i++){
            if (i > 0 && v[i] == v[i-1]) continue;
            if (gcd(v[i],v[i+1]) != v[i]) cnt ++;
        }

        cout << cnt << endl;
    }

    return 0;
}