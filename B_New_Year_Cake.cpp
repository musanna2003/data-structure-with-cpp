#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        int cnt1 = 0,cnt2=0;
        int c = max(a,b);
        int d = min(a,b);
        int s1 = 1, s2 = 2;
        int dt = d;
        while (s1 <= dt ){
            cnt1 ++;
            dt -= s1;
            s1 = s1 * 4;
        }
        dt = d;
        while (s2 <= dt ){
            cnt2 ++;
            dt -= s2;
            s2 = s2 * 4;
        }
        s1 = 1; s2 = 2;
        int cnt11 = 0,cnt22=0;
        int ct = c;
        while (s1 <= ct ){
            cnt11 ++;
            ct -= s1;
            s1 = s1 * 4;
        }
        ct = c;
        while (s2 <= ct ){
            cnt22 ++;
            ct -= s2;
            s2 = s2 * 4;
        }
        
        cout << max(min(cnt1 + cnt22, (2*cnt1)), min(cnt2+cnt11,(cnt2*2)+1)) << endl;
    }

    return 0;
}