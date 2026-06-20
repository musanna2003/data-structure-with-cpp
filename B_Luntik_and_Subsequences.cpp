#include <bits/stdc++.h>
using namespace std;

long long p(int x){
    return 1LL << x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <long long,int> mp;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]] ++;
        }

        if (mp[1] == 0) cout << 0 << endl;
        else{
            cout << mp[1] *  p(mp[0]) << endl;
        }


    }

    return 0;
}