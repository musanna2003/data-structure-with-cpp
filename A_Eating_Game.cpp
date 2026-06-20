#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n ;
        map <int ,int> mp; int mx = 0;

        while (n--){
            int val; cin >> val;
            mp[val] ++;
            mx = max(mx,val);
        }
        cout << mp[mx] << endl;
    }

    return 0;
}