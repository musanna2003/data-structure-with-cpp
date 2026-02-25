#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,h,l; cin >> n >> h >> l;
        int mc = 0,lc = 0;
        vector <int > v;
        for (int i = 0; i < n; i++){
            int val; cin >> val;
            if (val <= max(l,h)) {
                if (val <= min(l,h)) lc++;
                else mc ++;
            }
        }
        cout << min(mc,lc) + (lc > mc ? ((max(mc,lc) - min(mc,lc))/2) : 0) << endl;
    }

    return 0;
}