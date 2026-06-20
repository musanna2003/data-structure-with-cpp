#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long a,b,x; cin >> a >> b >> x;

        long long ans = abs(a-b);
        int cnt = 0;
        while(max(a,b) > 0){
            cnt ++;
            if(a>b) a/=x;
            else b/=x;
            ans = min(ans,abs(a-b) + cnt);
        }

        cout << ans << endl;
    }

    return 0;
}