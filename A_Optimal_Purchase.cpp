#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,a,b; cin >> n >> a >> b;
        long long c1 = a*n;
        long long c2 = ((n+2)/3 * b);
        long long c3 = (n/3)*b + ( n%3)*a;

        cout << min(c1,min(c2,c3)) << endl;
    }
 
    return 0;
}