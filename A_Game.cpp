#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int k; cin >> k;
        int a,b; cin >> a >> b;
        int aa,bb; cin >> aa >> bb;

        if (bb+b+k > a+aa){
            cout << "YES" << endl;
        }
        else if (bb+b+k == a+aa){
            if(a < b || aa < bb) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;

    }

    return 0;
}