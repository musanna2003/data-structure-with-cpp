#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n ;
        vector <long long> v;

        for (int i = 0; i < n; i ++){
            long long val;
            cin >> val;
            v.push_back(val);
        }
        int m = v[0]%2;
        int f = 0;
        for (int i = 1; i < n; i ++){
            if (v[i]%2 != m) f = 1;
        }

        if (f) sort(v.begin(),v.end());

        for (int i = 0; i < n; i ++){
            cout << v[i] << " ";
        }
        cout << endl;

    }
    return 0;
}