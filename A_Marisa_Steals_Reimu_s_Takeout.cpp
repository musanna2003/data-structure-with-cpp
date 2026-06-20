#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n;i++) cin >> v[i];

        map <int,int> mp;
        for (int i = 0; i < n; i++){
            mp[v[i]] ++;
        }

        int cnt = 0;
        cnt += mp[0];
        cnt += min(mp[2],mp[1]);
        cnt += (mp[1] > mp[2]? (mp[1]-mp[2])/3 :0);
        cnt += (mp[2] > mp[1]? (mp[2]-mp[1])/3 :0);

        cout << cnt << endl;

    }

    return 0;
}