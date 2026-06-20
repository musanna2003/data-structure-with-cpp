#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();

        int a = 0, b = 0;

        for (int i = 0; i < n -1 ; i++){
            if (s[i] == 'a' && s[i+1] == 'b') a ++;
            else if (s[i] == 'b' && s[i+1] == 'a') b++;
        }
        
        if (a == b) cout << s << endl;
        else {
            if (s[n-1] == 'a') s[n-1] = 'b';
            else s[n-1] = 'a';
            cout << s << endl;
        }

    }

    return 0;
}