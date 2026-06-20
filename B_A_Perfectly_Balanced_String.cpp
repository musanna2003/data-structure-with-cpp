#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        string r = "";
        map<char,int> mp;
        for (auto it : s){
            if(!mp.count(it)) {
                r += it;
                mp[it] ++;
            }
            else break;
        }

        bool f = 1;
        int n = s.size(), m = r.size();
        for (int i = 0; i < n;i ++){
            if (s[i] != r[i%m]) {
                f = 0;
                break;
            }
        }

        cout << (f? "YES" : "NO") << endl;
    }

    return 0;
}