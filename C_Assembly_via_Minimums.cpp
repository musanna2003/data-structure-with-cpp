#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        map <long long,int> mp;
        long long lst = LONG_LONG_MIN;
        for (int i = 0; i < (n*(n-1))/2; i ++){
            long long val; cin >> val;
            lst = max(lst,val);
            mp[val]++;
        }
        int j = n;
        
        for (auto it : mp){
            int m  = 0;
            int x = it.second;
            while (x>0){
                j --;
                m++;
                x -= j;
            }

            for (int i = 0; i < m; i ++){
                cout << it.first << " ";
            }
            lst = it.first;
        }
        cout << lst << endl;
    }

    return 0;
}