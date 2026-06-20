#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <vector<int>> v(n);
        int mn = INT_MAX;
        for (int i = 0; i < n; i++){
            int nn; cin >> nn;
            mn = min(mn,nn);
            while (nn--){
                int val; cin >> val;
                v[i].push_back(val);
            }
        }
        for (auto &vt : v){
            reverse(vt.begin(), vt.end());
        }

        sort(v.rbegin(),v.rend());

        for (auto &vt : v){
            reverse(vt.begin(), vt.end());
        }

        stack <int> st;
        map <int,int> mp;

        for (auto vt : v){
            for (auto vl : vt){
                st.push(vl);
                // cout << vl << " ";
            }
            // cout << endl;
        }

        while (!st.empty()){
            if (mp.count(st.top())){
                
            }
            else{
                cout << st.top() << " ";
            }
            mp[st.top()]++;
            st.pop();
        }
        cout << endl;
    }

    return 0;
}