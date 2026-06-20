#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long n,k;  cin >> n >> k;
        vector <long long> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort (v.begin(),v.end());
        int i = 0, j = n-1;
        vector <long long> ans;
        long long sm = 0, p = 0;
        while(i <= j){
            if(k - sm % k <= v[j]){
                ans.push_back(v[j]);
                sm += v[j];
                p += v[j];
                j--;
            }
            else{
                ans.push_back(v[i]);
                sm += v[i];
                i++;
            }
        }
        cout << p << endl;
        for (auto it : ans) cout << it << ' ';
        cout << endl;
    }

    return 0;
}