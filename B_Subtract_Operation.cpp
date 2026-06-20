#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <long long> v(n);
        map <long long,int> mp;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]] ++;
        }

        string ans = "NO";

        for (int i = 0; i < n; i++){
            if (mp.count(k+v[i])){
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}