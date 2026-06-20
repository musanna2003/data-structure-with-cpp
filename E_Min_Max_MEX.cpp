#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        map <long long,int> mp;
        vector <long long> v(n);
        for(int i = 0; i < n; i ++){
            cin >> v[i];
            mp[v[i]] ++;
        }
        if (mp[0] < k) {
            cout << 0 << endl;
            continue;
        }
        vector <int> mex;
        for (int i = 0; i < n; i++){
            
        }
    }

    return 0;
}