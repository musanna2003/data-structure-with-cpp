#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m; cin >> n >> m;
        vector <long long> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int cnt = 1;
        int ml = 0;
        for (int i = 1; i < n; i ++){
            if (v[i]%m == v[i-1]%m) cnt ++;
            else{
                ml = max(ml,cnt);
                cnt = 1;
            }
        }
        ml = max(ml, cnt);
        cout << (ml <= m-1 ? "YES\n" : "NO\n");
    }

    return 0;
}