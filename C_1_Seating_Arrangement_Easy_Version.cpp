#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,tb,st; cin >> n >> tb >> st;
        string s; cin >> s;

        long long ans = 0, aa = 0, ss = 0;

        for (int i = 0; i < n; i++){
            if(s[i] == 'E'){
                if(ss){
                    ans ++;
                    ss --;
                }
                else if(tb && aa){
                    aa --;
                    ans ++;
                    ss += st-1;
                    tb --;
                    if(ss){
                        ans ++;
                        ss --;
                    }
                }
            }
            else if(s[i] == 'I'){
                if(tb){
                    tb --;
                    ans ++;
                    ss += st-1;
                }
            }
            else{
                aa ++;
            }
        }
        
        ans += min(n-ans,aa);
        cout << ans << endl;
    }

    return 0;
}