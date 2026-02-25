#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map <long long , int> mp;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            mp[val]++;
        }

        vector <pair<long long,int>> v;
        for (auto it : mp){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end());

        long long sum = 0;
        
        int m = v.size();
        for (int i = 0; i < m; i++){
            if(i < m-1 && v[i].first == v[i+1].first-1){
                sum += (v[i].second-v[i+1].second>0?v[i].second-v[i+1].second:0);
            }
            else{
                sum += v[i].second;
            }
        }
        cout << sum << endl;
    }

    return 0;
}