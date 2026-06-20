#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mx = 0;
        map <long long,int> mp;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            mp[val]++;
            mx = max(mx,mp[val]);
        }

        if (mp.size() == 1){
            cout << 0 << endl;
            continue;
        }

        int cnt = 0;

        while(mx < n){
            cnt ++;
            mx *= 2;
            cnt += min(mx/2,(n - (mx/2)));
            // cout << cnt << " ";
        }

        cout << cnt << endl;
    }

    return 0;
}