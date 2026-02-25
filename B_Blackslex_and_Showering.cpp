#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        int sm = 0;
        for (int i = 0; i< n; i++){
            cin >> v[i];
        }

        for (int i = 0; i <n-1; i++){
            sm += abs(v[i] - v[i+1]);
        }

        int ans = INT_MAX;

        for (int i = 0; i < n; i++){
            if (i == 0){
                ans = min(ans,sm - abs(v[i] - v[i+1]));
            }
            else if (i == n-1){
                ans = min(ans,sm - abs(v[i] -v[i-1]));
            }
            else{
                int na = sm - abs(v[i] - v[i-1]) - abs(v[i] - v[i+1]) + abs(v[i-1]-v[i+1]);
                ans = min(ans,na);
            }
        }
        cout << ans << endl;
    }

    return 0;
}