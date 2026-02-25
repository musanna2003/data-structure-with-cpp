#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    cin >> n >> k;
    vector <long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    auto ok = [&](long long a){
        long long cnt = 0;
        for (int i = n/2; i <n; i++){
            if (v[i] > a) break;
            cnt += a - v[i];
        }
        return cnt <= k;
    };

    long long l = v[n/2], h = l + k;
    long long ans = v[n/2];
    while (l <= h){
        int mid = (l+h)/2;
        if (ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }

    cout << ans << endl;

    return 0;
}