#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        int mn = 0, mx = 0, cnt = 0;
        for (int i = 0; i < n; i ++){
            if (s[i] == '1'){
                cnt = 0;
                while (i < n-1 && !(s[i] == '0' && s[i+1] == '0')){
                    cnt ++; 
                    i ++;
                }
                if (i == n-1 && s[i] == '1') cnt ++;
                // cout << cnt << " ";
                if (cnt == 1){
                    mn ++;
                    mx ++;
                }
                else{
                    mx += cnt;
                    mn += (cnt + 2 )/2;
                }
                
            }
        }
        cout << mn << " " << mx << endl;
    }

    return 0;
}