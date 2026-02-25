#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int c0 = 0, c1 = 0, o0= 0, o1= 0;
        for (char c : s){
            if (c == '1') c1++;
            else c0++;
        }
        if (c0 == c1){
            cout << 0 << endl;
            continue;
        }
        int cnt = s.size();
        for (char c : s){
            if (c == '1') o0++;
            else o1++;

            if (o0 > c0 || o1 > c1){
                break;
            }
            cnt --;

        }
        cout << cnt << endl;
    }

    return 0;
}