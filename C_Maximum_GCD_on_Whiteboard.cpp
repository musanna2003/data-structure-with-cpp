#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n,m;
        cin>> n >> m;
        vector <int> v;
        for (int i = 0; i < n; i ++){
            int val;
            cin >> val;
            v.push_back(val);
        }
        sort(v.begin(),v.end());
        int f = 0;
        int c = 0;
        for (int i = 0; i <m; i ++){
            if (v[i]==v[m]) c ++;
        }
        for (int i = m; i < n; i ++){
            if (v[i] > v[m] && v[i]%v[m] != 0 && (v[i] < 4*v[m] || !c > 0 )) {
                f = 1;
                c--;
            }
        }

        if (f == 1) {
            cout << 1 << endl;
        }
        else {
            cout << v[m] << endl;
        }
    }
    return 0;
}