#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s,t; cin >> s >> t;

        int n = s.size(), m = t.size();

        bool f = 0;
        int j = n-1;
        map <char,int> mp;
        for(int i = m-1; i >= 0; i--){
            // cout << t[i] ;
            while(j > -1 && t[i] != s[j]){
                mp[s[j]] ++;
                j--;
            }
            // cout << s[j] << " ";
            if (j < 0 || mp.count(s[j])){
                f = 1;
                break;
            }
            j--;
        }

        cout << (f? "NO" : "YES") << endl;

    }

    return 0;
}