#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,l,r; cin >> n >> l >> r;
        vector <int> v,vv;

        for (int i= 0; i < n; i++){
            int val; cin >> val;
            if (i < l || i >= r){
                v.push_back(val);
            }
            else{
                vv.push_back(val);
            }
        }
        int mn = INT_MAX;
        int id = 0;
        for (int i = 0; i < vv.size(); i++ ){
            if (mn > vv[i]) {
                mn = vv[i];
                id = i;
            }
        }

        bool f = 1;

        for (int i = 0; i < v.size(); i ++){
            if (v[i] > vv[id]){
                f = 0;
                for (int j = 0; j < vv.size(); j ++){
                    cout << vv[(j + id) % vv.size()] << " ";
                }
                cout << v[i] << " ";
            }
            else {
                cout << v[i] << " ";
            }
        }

        if (f){
            for (int j = 0; j < vv.size(); j ++){
                cout << vv[(j + id) % vv.size()] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}