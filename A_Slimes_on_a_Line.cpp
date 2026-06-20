#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mn = 1e5,mx = 0;
        while (n--){
            int val; cin >> val;
            mn = min(mn,val);
            mx = max(mx,val);
        }

        cout << (mx-mn+1)/2 << endl;
    }

    return 0;
}