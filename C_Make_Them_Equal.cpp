#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; char c; cin >> n >> c;
        string s; cin >> s;
        map <char,int> mp;
        for (int i = 0; i < n; i++){
            mp[s[i]] ++;
        }
        if (mp[c] == n){
            cout << 0 << endl;
            continue;
        }
        if (mp[c] == 0){
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;
            continue;
        }
        int x = n;
        for (int i = n; i >= 0; i--){
            if (s[i] == c){
                x = i+1; break;
            }
        }
        if (x == 1){
            cout << 2 << endl;
            cout << n-1 << ' ' << n << endl;
        }
        else if (n < 2*x){
            cout << 1 << endl;
            cout << x << endl;
        }
        else {
            cout << 2 << endl;
            cout << n-1 << ' ' << n << endl;
        }
        
    }

    return 0;
}