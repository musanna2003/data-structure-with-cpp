#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> o,e;
        long long sm = 0;
        long long mx = 0;
        for (int i = 0; i < n; i++){
            long long val; cin >> val;
            if(val % 2 == 0) e.push_back(val);
            else o.push_back(val);
            mx = max(mx,val);
            sm += val;
        }

        if (o.size() == 0 || e.size() == 0){
            cout << mx << endl;
        }
        else {
            cout << sm - (o.size() - 1) << endl;
        }
    }

    return 0;
}