#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,s; cin >> n >> s;
        int cnt = 0;

        for (int i = 0; i < n; i ++){
            int a,b,x,y; cin >> a >> b >> x >> y;
            if ((x == y && a == b) || (x+y == s && a != b)) cnt ++;
        }
        cout << cnt << endl;
    }

    return 0;
}