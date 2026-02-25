#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <long long> v,v2;
        while (n--){
            long long a,b,c;
            cin >> a >> b >> c;
            v2.push_back((b-1) * a);
            long long dt = (a * b ) - c;
            if (dt > 0) {
                v.push_back(dt);
            } 
        }
        for (auto vl : v2){
            k -= vl;
        }
        if (k <= 0) {
            cout << 0 << endl;
            continue;
        }
        if (v.empty()){
            cout << -1 << endl;
        } 
        else {
            sort(v.rbegin(),v.rend());
            cout << (k+v[0]-1)/v[0] << endl;
        }
    }

    return 0;
}