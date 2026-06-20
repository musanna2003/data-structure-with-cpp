#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        string s ; cin >> s;
        vector <int> v;
        map <int,int> mp;
        for (int i = 0; i < n; i++){
            if(mp.count(i)) break;
            int cnt = 0,j = i;
            while (j < n){
                cnt += s[j] - '0';
                mp[j] ++;
                j += k;
            }
            v.push_back(cnt);
        }
        string ans = "YES";
        for (auto it : v){
            if (it%2 == 1){
                ans = "NO";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}