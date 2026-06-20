#include <bits/stdc++.h>
using namespace std;

long long power(long long k, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) res *= k;
        k *= k;
        n >>= 1;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        long long k = 1;
        while (true) {
            if (power(k,n) % n == 0) break;
            k++;
        }
        cout << k << endl;
    }

    return 0;
}