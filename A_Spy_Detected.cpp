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

        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]] ++;
        }
        int mn;
        for (auto it : mp){
            if (it.second == 1) mn = it.first;
        }

        for(int i = 0; i < n; i++){
            if (mn == v[i]){
                cout << 1 + i << endl;
                break;
            }
        }

    }

    return 0;
}