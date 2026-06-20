#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        int a = -1, b = -1;
        for (int i = 0; i < n/2; i++){
            if (v[i] != v[n-1-i]){
                a = v[i];
                b = v[n-1-i];
                break;
            }
        }
        if(a==-1){
            cout << "YES" << endl;
            continue;
        }
        vector <int> v1,v2;

        for (int i = 0; i < n; i++){
            if(v[i] != a) v1.push_back(v[i]);
            if(v[i] != b) v2.push_back(v[i]);
        }

        bool f1 = 1;
        for (int i = 0; i < v1.size()/2; i++){
            if (v1[i] != v1[v1.size()-1-i]){
                f1 = 0;
                break;
            }
        }
        bool f2 = 1;
        for (int i = 0; i < v2.size()/2; i++){
            if (v2[i] != v2[v2.size()-1-i]){
                f2 = 0;
                break;
            }
        }

        if(f1||f2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}