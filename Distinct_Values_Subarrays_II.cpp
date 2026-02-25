#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;
    vector <long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    map <long long,int> mp;
    int l = 0, r= 0;
    long long cnt = 0;
    while (l < n){
        mp[v[l]] ++;
        
        while(mp.size()>k){
            mp[v[r]] --;
            if (mp[v[r]] == 0) mp.erase(v[r]);
            r ++;
        }
        cnt += l-r+1;
        l++;
    }
    cout << cnt << endl;
    return 0;
}