#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        map <long long,int> mp;
        vector <long long> v(n);
        long long mx = 0;
        for (int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]] ++;
        }
        sort(v.begin(),v.end());
        int cnt = 1;
        v.push_back(v.back() + k + 2);
        string ans = "NO";
        for (int i = 0; i < n; i++){
            if(v[i] < v[i+1] - k){
                if(mp[v[i]] % 2 == 0 || cnt > mp[v[i]]){
                    ans = "YES";
                    break;
                }
                cnt = 1;
            }
            else cnt ++;
        }
        cout << ans << endl;
    }

    return 0;
}