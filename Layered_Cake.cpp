#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <int > a(n),b(m);
        for (int i = 0; i <n; i++){
            cin >> a[i];
        }
        for (int i = 0; i <m; i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(),b.end());
        int ans = 0;

        int j = 0;
        for (int i = 0; i < n; i++){
            while(j < m && a[i]> b[j] ){
                j++;
            }
            ans += j;
        }
        cout << ans << endl;
    }

    return 0;
}