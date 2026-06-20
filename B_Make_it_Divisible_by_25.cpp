#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        vector <int> v;

        while (n){
            v.push_back(n%10);
            n /= 10;
        }
        reverse(v.begin(),v.end());

        int i0 = -1, i5 = -1;

        for (int i = 0; i < v.size(); i++){
            // cout << v[i] << " ";
            if (v[i] == 0) i0 = i;
            if (v[i] == 5) i5 = i;
        }

        int i00 = -1, i55 = -1;
        for (int i = 0; i < i0; i++){
            if (v[i] == 0 || v[i] == 5) i00 = i;
        }

        for (int i = 0; i < i5; i++){
            if (v[i] == 2 || v[i] == 7) i55 = i;
        }

        cout << min(v.size()- 2 - i00,v.size()- 2 - i55) << endl;

    }

    return 0;
}