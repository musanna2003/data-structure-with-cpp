#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) {
    return a / __gcd(a, b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        cout << lcm(__gcd(a,b),a) - __gcd(__gcd(a,b),b) << endl; 
    }

    return 0;
}