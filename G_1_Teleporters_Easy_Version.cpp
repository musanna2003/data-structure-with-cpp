#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,c; cin >> n >> c;
        vector <int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            v[i] += i+1;
        }
        sort(v.begin(),v.end());
        long long sm = 0;

        int cnt = 0;
        for (int i = 0; i < n; i++){
            sm += v[i];
            if (sm > c) break;
            cnt ++;
        }
        cout << cnt << endl;

    }

    return 0;
}