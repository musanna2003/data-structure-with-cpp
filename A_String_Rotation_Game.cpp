#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0;
        bool f = 0;
        bool f2 = 0;
        for (int i = 0; i < n; i++){
            if (i == n-1){
                if (s[i] == s[0]) f2 = 1;
                cnt ++;
            }
            else{
                if (s[i] == s[i+1]) f = 1;
                else cnt ++;
            }
        }
        if (f2) cout << cnt << endl;
        else if (f) cout << cnt +1 << endl;
        else cout << cnt << endl;
    }

    return 0;
}