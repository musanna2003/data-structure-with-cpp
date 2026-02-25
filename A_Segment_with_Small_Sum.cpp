#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mx = 0;
        while (n--){
            int val; cin >> val;
            mx = max(mx,val);
        }
        cout << mx ;
    }

    return 0;
}