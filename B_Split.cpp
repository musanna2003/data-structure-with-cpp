#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        map <int,int> mp;

        for (int i = 0 ; i < 2*n ; i++){
            int val;
            cin >> val;
            mp[val] ++;
        }
        int co =0;
        int ce = 0;
        for (auto it : mp){
            if (it.second%2 == 0) ce ++;
            if (it.second%2 == 1) co++;
        } 
        cout << (count_e*2) + count_o  << endl;
    }

    return 0;
}