#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b; cin >> a >> b;
        if (a > b) swap(a,b);

        if ( a == b){
            cout << 0 << " " << 0 << endl;
        }
        else{
            long long d = b - a;
            long long dd = a /d;
            cout << d << " " << min(a - (d*dd), ((dd+1)*d) - a) << endl;
        }

    }

    return 0;
}