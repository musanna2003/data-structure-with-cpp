#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,a,b,p,q; cin >> n >> a >> b >> p >> q;

    long long na = n/a, nb = n/b;
    long long lc = n/lcm(a,b);

    long long c1 = (na * p) + ((nb-lc) * q);
    long long c2 = ((na-lc) * p) + (nb * q);

    cout << max(c1,c2) << endl;
    return 0;
}