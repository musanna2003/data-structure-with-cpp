#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >>n;
        vector <long long> v(n);
        for (int i= 0; i <n; i++){
            cin >> v[i];
        }

        long long ans = 0;
        int cb = 0;

        for (int i = 0; i < n; i++){
            cb ++;
            if (i == n-1){
                ans += cb * v[i];
                continue; 
            }
            else if (v[i] < v[i+1]){
                if (cb == 2){
                    ans += v[i];
                    cb = 1;
                }
            }
            else{
                ans += cb * v[i];
                cb = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}