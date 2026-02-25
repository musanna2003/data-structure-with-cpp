#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int l,a,b; cin >> l >> a >> b;
        vector <int> v;
    
        for (int i = 0; i < l; i++){
            v.push_back((a + b)%l);
            a = (a + b)%l;
        }
        sort (v.begin(),v.end());
        cout << v.back() << endl;
    }

    return 0;
}