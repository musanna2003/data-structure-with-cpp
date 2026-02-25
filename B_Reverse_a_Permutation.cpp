#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        map <int,int> mp;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]] = i;
        }

        int tn = n;
        for (int i = 0 ; i < n; i++){
            if (v[i] != tn - i){
                reverse(v.begin() + i, v.begin() + mp[tn - i] + 1);
                break;
            }
        } 
        for (auto it : v) cout << it << " ";
        cout << endl;
    }

    return 0;
}