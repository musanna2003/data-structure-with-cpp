#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,k; cin >> n >> k;
        vector <long long> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        vector <long long> v;
        
        for (int i = 0; i < n; i++){
            bool f = 1;
            for (int j = 0; j <= 32; j ++){
                if((((a[i] >> j)&1) == 1) && (((k >> j)&1)== 0)){
                    f = 0;
                    break;
                }
            }
            if(f){
                v.push_back(a[i]);
            }
            else break;
        }

        for (int i = 0; i < n; i++){
            bool f = 1;
            for (int j = 0; j <= 32; j ++){
                if((((b[i] >> j)&1) == 1) && (((k >> j)&1)== 0)){
                    f = 0;
                    break;
                }
            }
            if(f){
                v.push_back(b[i]);
            }
            else break;
        }

        for (int i = 0; i < n; i++){
            bool f = 1;
            for (int j = 0; j <= 32; j ++){
                if((((c[i] >> j)&1) == 1) && (((k >> j)&1)== 0)){
                    f = 0;
                    break;
                }
            }
            if(f){
                v.push_back(c[i]);
            }
            else break;
        }
        
        long long ans = 0;

        for(auto it : v){
            ans = (ans|it);
            // cout << it << " ";
        }

        cout << (ans == k ? "Yes" : "No") << endl;
    }

    return 0;
}