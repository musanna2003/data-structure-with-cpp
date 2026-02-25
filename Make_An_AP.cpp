#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    bool odd = 0,evn = 0;

    while (t--) {
        int n; cin >> n;
        vector <long long > v(n);

        for (int i = 0; i < n; i++){
            cin >> v[i];
            if (v[i]%2 == 0) evn = LONG_LONG_MAX;
            if (v[i]%2 == 1) odd = 1;
        }

        vector <long long > d(n);
        long long dif = 0;
        if (odd == evn){
            dif = 1;
        }
        else {
            for (int i = 1; i < n; i++){
                dif = min(v[i] - v[i-1],dif);
            }
        }
        long long c= 0;
        for (int i = 1; i < n; i++){

        }
    }

    return 0;
}