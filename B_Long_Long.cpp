#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v;

        for ( int i = 0; i< n ; i ++){
            long long val ;
            cin >> val;
            if (val != 0) v.push_back(val);
        }

        long long sum = 0;
        int c= 0;
        n = v.size();
        for ( int i = 0; i< n ; i ++){
            sum += abs(v[i]);
            if (v[i] < 0 && i == n-1 || v[i] <0 && v[i+1] >0) c++;
            if (v[i] < 0 && i == 0 || v[i] > 0 && v[i+1] <0) c++;
        }

        cout << sum << " " << c/2 << endl;
    }

    return 0;
}