#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    vector <int> v,vv;
    map<int,int> mp;
    for (int i = 0; i < n; i++){
        int val; cin >> val;
        if(!mp.count(val)) mp[val] = i;
    }
    for (int i = 0; i < m; i++){
        int q; cin >> q;
        if(mp.count(q)){
            int cnt = 0;
            for (auto ii : vv){
                if(mp[q] < ii) cnt ++;
            }
            cout << mp[q] + 1 + cnt << " ";
            v.insert(v.begin(), q);
            vv.push_back(mp[q]);
            mp.erase(q);
        }
        else{ 
            int it = find(v.begin(), v.end(), q) - v.begin();
            v.erase(v.begin()+it);
            cout << it+1 << ' ';
            v.insert(v.begin(), q);
        }
    }

    return 0;
}