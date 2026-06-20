#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v6,v2,v3,vn;
        while(n--){
            long long val; cin >> val;
            if(val%6 == 0) v6.push_back(val);
            else if(val%3 == 0) v3.push_back(val);
            else if(val%2 == 0) v2.push_back(val);
            else vn.push_back(val);
        }
        for (auto it : v6) cout << it << " ";
        for (auto it : v2) cout << it << " ";
        for (auto it : vn) cout << it << " ";
        for (auto it : v3) cout << it << " ";
        cout << endl;
    }

    return 0;
}