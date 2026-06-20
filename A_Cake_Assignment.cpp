#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,x; cin >> n >> x;
        long long k = 1ll << n;
        long long a = x,b = (2ll * k) - x;
        vector <int> ans;
        while(a != k){
            if (a > b){
                ans.push_back(2);
                a -= b; b *= 2;
            }
            else{
                ans.push_back(1);
                b -= a; a *= 2;
            }

        }
        cout << ans.size() << endl;
        for (int i = ans.size() -1 ; i >= 0; i--) cout << ans[i] << " ";
        cout << endl; 
    }

    return 0;
}