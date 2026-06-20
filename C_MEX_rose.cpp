#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        map <int,int> mp;
        for (int i = 0; i < n; i++){
            int val; cin >> val;
            mp[val] ++;
        }
        int cnt = 0;
        for (int i = 0; i < k; i ++){
            if (!mp.count(i)) cnt ++;
        }
        cnt += max(0,mp[k] - cnt);
        cout << cnt << endl;
    }

    return 0;
}