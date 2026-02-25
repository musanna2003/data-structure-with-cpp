#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <int,int> mp;
        for (int i = 0; i <n ; i++){
            int val; cin >> val;
            mp[val] ++;
        }
        vector <int> v;
        int mx = 0;
        for (auto it : mp){
            mx = max(mx,it.second);
        }
        for (auto it : mp){
            if (mx == it.second) v.push_back(it.first);
        }
        sort(v.begin(),v.end());
        cout << v[0] << endl;
    }

    return 0;
}