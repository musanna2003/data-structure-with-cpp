#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k,a,b; cin >> n >> k >> a >> b;
        vector <pair<long long,long long>> v(n);

        for (int i = 0; i < n; i++){
            long long x,y; cin >> x >> y;
            v[i] = {x,y};
        }

        long long l = 10e10, r = 10e10;
        for (int i = 0; i < k; i ++){
            l = min(l,abs(v[a-1].first - v[i].first)+abs(v[a-1].second - v[i].second));
            r = min(r,abs(v[b-1].first - v[i].first)+abs(v[b-1].second - v[i].second));
        }

        cout << min(l + r, abs(v[a-1].first - v[b-1].first) + abs(v[a-1].second - v[b-1].second)) << endl;

    }

    return 0;
}