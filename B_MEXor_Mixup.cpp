#include <bits/stdc++.h>
using namespace std;
long long xr_n(long long n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a>> b;
        int xr = xr_n(a-1);

        int ans = a;
        if(b == xr){}
        else if ((xr ^ a) == b) ans += 2;
        else ans ++;
        cout << ans << endl;
    }

    return 0;
}