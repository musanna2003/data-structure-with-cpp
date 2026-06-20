#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        string ans = "NO";
        for (long long i = 2; i < 1100; i++){
            long long tr = i*i;
            long long ts = 1 + i;
            while(ts < n){
                ts += tr;
                if (ts == n) {
                    ans = "YES";
                    break;
                }
                tr *= i;
            }
            if(ans == "YES"){
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}