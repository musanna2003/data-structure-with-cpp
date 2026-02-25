#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int l = 0, r = n-1;
        while (r>l){
            if (s[l]!=s[r]){
                l++;
                r--;
            }
            else break;
        }
        cout << n-(2*l) << endl;
    }
    return 0;
}