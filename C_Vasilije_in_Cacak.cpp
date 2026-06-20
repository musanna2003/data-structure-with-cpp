#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k,x; cin>> n >> k >> x;
        
        long long mn = (k*(k+1))/2;
        long long mx = (n*(n+1))/2 - ((n-k)*((n-k)+1))/2;
        if (x >= mn && x <= mx) cout << "YES" << endl;
        else cout << "NO" << endl;

    }

    return 0;
}