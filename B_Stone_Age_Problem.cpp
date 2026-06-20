#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n>> m;
    vector <long long> v(n);
    long long sm = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sm += v[i];
    }
    bool f = 1;
    long long px = 0;
    map <long long,int> mp;
    while(m--){
        int ct; cin >> ct;
        if (ct == 1){
            long long i,x; cin >> i >> x;
            if(f){
                sm -= v[i-1];
                sm += x;
                v[i-1] = x;
            }
            else{
                if(mp.count(i-1)) sm -= mp[i-1];
                else sm -= px;
                sm += x;
                mp[i-1] = x;
            }
        }
        else{
            long long x;
            cin >> x;
            f = 0;
            sm = n*x;
            px = x;
            mp.clear();
        }
        cout << sm << endl;
    }

    return 0;
}