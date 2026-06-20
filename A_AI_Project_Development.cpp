#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,x,y,z; cin >> n >> x >> y >> z;

        int c1 = 0, c2 = 0, cnt1 = 0, cnt2 = 0;

        while(cnt1 < n){
            c1 ++;
            cnt1 += x + y;
        }

        while(cnt2 < n){
            c2 ++;
            if(c2 > z) cnt2 += 10*y;
            cnt2 += x;
        }
        cout << min(c1,c2) << endl;
        
    }

    return 0;
}