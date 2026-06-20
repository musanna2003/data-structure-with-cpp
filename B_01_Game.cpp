#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s;  cin >> s;

        int n = s.size();
        int c1 = 0,c0 = 0;
        for (int i = 0; i < n; i ++){
            if (s[i] == '1'){
                c1 ++;
            }
            else c0++;
        }
        cout << (min(c0,c1)% 2 == 0 ? "NET" : "DA" ) << endl;
    }

    return 0;
}