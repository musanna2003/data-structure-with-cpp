#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n = 7;
        int sm = 0;
        vector <int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        long long ans = LONG_LONG_MIN;
        for (int i = 0; i < n; i++){
            long long sm = 0;
            for (int j = 0; j < n; j ++){
                if (i != j){
                    sm += -1 * v[j];
                }
                else{
                    sm += v[j];
                }
            }
            ans = max(ans,sm);
        }
        cout << ans << endl;
    }

    return 0;
}