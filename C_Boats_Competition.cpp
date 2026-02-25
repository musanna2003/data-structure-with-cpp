#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >>n;
        vector <int> v(n);
        for (int i= 0 ; i < n; i ++){
            cin >> v[i];
        }
        
        int ans = 0;
        for (int j = 2; j <201; j ++){
            int count = 0;
            map <int,int>mp2;
            for (int i= 0 ; i < n; i ++){
                if (mp2.count(j - v[i])){
                    mp2[j - v[i]] --;
                    if (mp2[j - v[i]] == 0) mp2.erase(j - v[i]);
                    count ++;
                    continue;
                }
                mp2[v[i]] ++;
            }
            ans = max(ans,count);
        }
        cout << ans << endl;
    }

    return 0;
}