#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    long long n,k; cin >> n >> k;
    vector <pair<int,long long>> v(n);
    for (int i = 0; i <n; i++){
        long long val;
        cin >> val;
        v[i] = {val,i+1};
    }

    sort(v.begin(),v.end());

    int l =0, r = n-1;
    while (l < r){
        long long sum = v[l].first + v[r].first;
        if (sum == k) {
            cout << min(v[l].second,v[r].second) << " " << max(v[l].second,v[r].second) << "\n";
            return 0;
        }
        else if (sum < k) l++;
        else r--;
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
