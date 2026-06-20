#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <long long,int> mp;
        set <long long> st;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            mp[val] ++;
            st.insert(val);
        }

        bool f = 0;
        for (auto it : mp){
            if (it.second == 1){
                f = 1;
                break;
            }
        }
        if (f){
            cout << -1 << endl;
            continue;
        }
        int i = 1;
        for (auto se : st){
            cout << i + mp[se] - 1 << " ";
            int ii = i - 1;
            for (;i < ii + mp[se]; i ++) cout << i << " ";
            i ++;
        }
        cout << endl;

    }

    return 0;
}