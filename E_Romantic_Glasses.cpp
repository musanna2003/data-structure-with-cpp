#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <long long, int> mp;
        bool f= 0;
        long long sm = 0;
        mp[sm]++;
        while (n--){
            long long val; cin >> val;
            if (n%2 == 0) val *= -1;
            sm += val;
            if (mp.count(sm)) f = 1;
            mp[sm] ++;
        }
        cout << (f? "YES\n" : "NO\n");
    }

    return 0;
}