#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long n){
    if (n <= 2) return 1;
    for (int i = 2; i <= sqrt(n); i ++){
        if (n % i == 0) return 0;
    }
    return 1;
}

long long divisor(long long n){
    for (int i  = 2; i <= sqrt(n); i ++){
        if (n%i == 0) return i;
    }
    return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long l,r; cin >> l >> r;
        if (l == r && is_prime(l) || r < 4) cout << -1 << endl;

        else if (l < r){
            if ( r % 2 == 0) cout << r/2 << ' ' << r/2 << endl;
            else cout << (r-1)/2 << " " << (r-1)/2 << endl;
        }

        else cout << divisor(l) << ' ' << l - divisor(l) << endl;

    }

    return 0;
}