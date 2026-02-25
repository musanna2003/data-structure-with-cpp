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
        sort(v.begin(),v.end());
        int j = 2;
        while (true){
            int f = 0;
            for (int i = 0; i < n; i ++){
                if (gcd(v[i], j) == 1) f = 1;
            }
            if (f) break;
            j ++;
        }
        cout << j << endl;
    }
    return 0;
}