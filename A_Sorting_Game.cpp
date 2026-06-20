#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        vector <int> v(n),vv,v2;
        int c1 = 0;
        for (int i = 0; i < n; i++){
            v[i] = s[i] - '0';
            if (v[i] == 1) c1 ++;
        }
        vv = v;
        sort(vv.begin(),vv.end());
        if (vv == v){
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl;
            for (int i = 0; i < n; i++){
                if (i < (n-c1) && v[i] == 1) v2.push_back(i+1);
                else if (i >= n-c1 && v[i] == 0) v2.push_back(i+1);
            }
            cout << v2.size() << endl;
            for (int it : v2) cout << it << " ";
            cout << endl;
        }
    }

    return 0;
}