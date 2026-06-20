#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b,n;
        cin >> a >> b >> n;
        long long sm = 0;
        while (n--){
            long long val; cin >> val;
            sm += min(val,a-1);
        }
        cout << sm + b << endl;
    }

    return 0;
}