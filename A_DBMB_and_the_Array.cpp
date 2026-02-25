#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,s,x; cin >> n >> s >> x;
        int sm = 0;
        while (n--){
            int val; cin >> val;
            sm += val;
        }

        if (s >= sm && (s - sm )% x == 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}