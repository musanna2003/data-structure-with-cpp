#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n,q;
        cin >> n >> q;

        map<long long,int> mp;
        map<long long,int> mp2;

        for (int i = 0; i < n; i++){
            int val;
            cin >> val;
            if(!mp.count(val)){
                mp[val] = i;
            }
            mp2[val] = i;
        }

        while (q --){
            long long a,b;
            cin >> a >> b;
            
            if (mp.count(a) && mp.count(b) && mp[a]<mp2[b]) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}