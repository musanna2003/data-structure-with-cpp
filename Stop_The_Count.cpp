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
        int cnt0 = 0, cnt1 = 0;
        for (char c : s){
            if (c == '1') cnt1++;
            else if(c == '0') cnt0++;
            if(cnt1>cnt0) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}