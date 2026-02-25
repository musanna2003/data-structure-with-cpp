#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        map <long long,vector<int>> mp;
        set <int> st;
        vector <long long> v;
        long long mx = 0;
        for (int i= 0; i < n; i++){
            long long val; cin >> val;
            mp[val].push_back(i);
            st.insert(i);
            v.push_back(val);
            mx = max(mx,val);
        }
        long long cost = 0;
        for (auto it : mp){
            // cout << it.first << ": ";
            // for (auto it2 : it.second) cout << it2 << " ";
            // cout << endl;
            for (auto it2 : it.second){
                auto ub = st.upper_bound(it2);
                auto lb = st.lower_bound(it2);

                if (ub == st.end()) ub = st.begin();
                if (lb == st.begin()) lb = prev(st.end());
                else lb = prev(lb);

                cost += min(v[*lb],v[*ub]);
                st.erase(it2);
            }
        }
        
        cout << cost - mx << endl;
    }
}