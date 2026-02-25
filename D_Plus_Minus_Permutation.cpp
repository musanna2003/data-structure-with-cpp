#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;   // divide first to avoid overflow
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,a,b; cin >> n >> a >> b;
        long long da = ((n/a) - (n/lcm(a, b)));
        long long db = ((n/b) - (n/lcm(a, b)));
        long long ans= 0;
        ans = (((n * (n+1))/2) - ((((n-da)) * (n-da+1))/2)) - ((db * (db+1))/2);
        cout << ans << endl;
    }
   

    return 0;
}