#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int cnt = 0;
        bool f = 0;
        for (int i = 1; i < s.size() -1 ; i++){
            if (s[i] == '(' ){
                cnt++;
            }
            else cnt --;
            if (cnt < 0) {cout << "YES" << endl;f= 1; break;}
        }
        if (f) continue;
        if (cnt == 0) cout << "NO" <<endl;
        else cout << "YES" << endl;
    }

    return 0;
}