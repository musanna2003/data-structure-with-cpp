#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int cy = 0;
        for (char ch : s){
            if (ch == 'Y') cy ++;
        }
        cout << (cy > 1? "NO\n":"YES\n");
    }

    return 0;
}