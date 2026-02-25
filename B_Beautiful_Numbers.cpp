#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        vector <int> v;
        int sum = 0;
        for (auto ch : s){
            v.push_back(ch - '0');
            sum += ch - '0';
        }

        if (sum < 10){
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        int ssm = 0;
        vector <int> vv;
        for (int i = 0; i < (int)v.size(); i++){
            if (i == 0){
                vv.push_back(v[i] - 1);
            }
            else vv.push_back(v[i]);
            
        }

        sort(vv.begin(), vv.end(), greater<int>());

        for (auto it : vv){
            ssm += it;
            cnt ++;
            if (sum - ssm < 10) break;
        }
        cout << cnt << endl;
    }

    return 0;
}