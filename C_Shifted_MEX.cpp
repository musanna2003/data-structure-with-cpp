#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v;
        map <long long, int> mp;
        for (int i=0; i <n; i++){
            long long val; cin >> val;
            if (!mp.count(val)){
                v.push_back(val);
            }
            mp[val] ++;
        }


        sort(v.begin(),v.end());

        int j = 0;
        int sz = v.size();
        int mx = 0;
        if (sz == 1){
            cout << 1 << endl;
            continue;
        }
        long long pv = v[0];

        for (int i = 1; i < sz ; i++){
            if ( i == sz-1){
                if (pv+ 1 != v[i]){
                    mx = max(mx,(i-j));
                }
                else{
                    mx = max(mx,(i-j+1));
                }
            }
            else if (pv+ 1 != v[i]){
                mx = max(mx,(i-j));
                j = i;
            }
            pv = v[i];
        }
        cout << mx << endl;
    }

    return 0;
}