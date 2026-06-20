#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> m >> n;
        map <long long,int> mp;
        string s; cin >> s;
        for (int i = 0; i < n; i++) {
            long long val; cin >> val;
            mp[val] ++;
        };

        int r = 1;
        for (auto c : s){
            if(c == 'A'){
                r++;
                mp[r]++;
            }
            else{
                r++;
                while(mp.count(r)) r ++;
                mp[r] ++;
                while(mp.count(r)) r ++;
            }
        }
        cout << mp.size() << endl;
        for (auto it : mp) cout << it.first << " ";
        cout << endl;
    }

    return 0;
}