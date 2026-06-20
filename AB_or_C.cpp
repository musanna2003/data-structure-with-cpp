#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        vector<array<long long,3>> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        }

        vector<pair<long long,int>> v;

        // flatten
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 3; j++) {
                v.push_back({arr[i][j], i});
            }
        }

        sort(v.begin(), v.end());

        vector<int> cnt(n, 0);
        int covered = 0;

        int l = 0;
        long long ans = LLONG_MAX;

        for (int r = 0; r < 3*n; r++) {
            if (cnt[v[r].second] == 0) covered++;
            cnt[v[r].second]++;

            while (covered == n) {
                ans = min(ans, v[r].first - v[l].first);

                cnt[v[l].second]--;
                if (cnt[v[l].second] == 0) covered--;

                l++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}