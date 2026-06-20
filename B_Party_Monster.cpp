#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0, cnt2 = 0;
        for (auto it : s){
            if (it == '(') cnt ++;
            else cnt2++;
        }
        cout << (cnt == cnt2? "YES":"NO") << endl;
    }

    return 0;
}