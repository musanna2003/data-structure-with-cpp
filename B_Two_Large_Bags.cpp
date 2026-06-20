#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v;
        map <long long,int> mp;
        for (int i = 0; i < n; i++) {
            int val; cin >> val;
            if(!mp.count(val)){
                v.push_back(val);
            }
            mp[val] ++;
        }
        sort (v.rbegin(),v.rend());

        string ans = "Yes";
        for (auto &it : mp){
            if (it.second > 2){
                mp[it.first+1] += it.second - 2;
                it.second = 2;
            }
        }
        for (auto it : mp){
            if(it.second % 2 == 1){
                ans = "No";
                break;
            }
        }
        cout<< ans << endl;
    }

    return 0;
}