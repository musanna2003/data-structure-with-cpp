#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k,x; cin >> n >> k >> x;
    vector <long long> v(n);

    for (int i = 0; i< n; i++) cin >> v[i];
    sort (v.begin(),v.end());

    vector <long long> d;
    long long cnt = 1;
    for (int i = 0; i< n-1; i++){
        if (v[i + 1] - v[i] > x) {
            d.push_back(v[i+1] - v[i] - 1);
            cnt ++;
        }
    }

    // for (auto it : d) cout << it << " ";
    // cout << endl;
    sort(d.begin(),d.end());
    for (auto it : d){
        long long tc = it/x;
        if (tc > k) break;
        else{
            cnt --;
            k -= tc;
        }
    }
    cout << cnt << endl;

    return 0;
}