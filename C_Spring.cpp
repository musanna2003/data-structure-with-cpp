#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b){
    return (a / __gcd(a,b)) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b,c,m; cin >> a >> b >> c >> m;

        long long c3 = lcm(a,lcm(b,c));

        long long ab = lcm(a,b);
        long long bc = lcm(b,c);
        long long ca = lcm(c,a);

        long long aa = ((m/a) * 6) + ((m/c3) * 2) - ((m/ab) * 3) - ((m/ca) * 3);
        long long bb = ((m/b) * 6) + ((m/c3) * 2) - ((m/ab) * 3) - ((m/bc) * 3);
        long long cc = ((m/c) * 6) + ((m/c3) * 2) - ((m/bc) * 3) - ((m/ca) * 3);

        cout << aa << " " << bb << " " << cc << endl;
    }

    return 0;
}