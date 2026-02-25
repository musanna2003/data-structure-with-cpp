#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n),b(n),c(n);

        for (int i = 0; i < n ;i ++){
            cin >> a[i] >> b[i];
        }
        for (int i = 0; i < n ;i ++){
            cin >> c[i];
        }
        int dly = 0, br;
        for (int i = 0; i < n-1 ;i ++){
            dly += c[i];
            br = (b[i]-a[i]+1)/2;
            dly = max(b[i],a[i]+br+dly) - b[i];

        }
        cout << a[n-1] + dly + c[n-1] << endl;
    }

    return 0;
}