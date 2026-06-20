#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b; cin >> a >> b;
        int ans = INT_MAX;
        for (int i = 0; i < 1e5; i ++){
            int cnt = i;
            long long aa = a;
            long long bb= b + i;

            if (bb == 1) continue;
            
            while(aa > 0){
                cnt ++;
                aa /= bb;
            }
            if (ans < cnt){
                break;
            }
            else{
                ans = cnt;
            }
        }
        

        cout << ans << endl;
    }

    return 0;
}