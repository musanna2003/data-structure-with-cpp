#include <bits/stdc++.h>
using namespace std;
bool is_pal(string s){
    for (int i = 0; i < s.size(); i++){
        if (s[i] != s[s.size() - 1- i]) return 0;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        if (is_pal(s)){
            cout << 0 << endl; 
            continue;
        }
        int l = 0, r = 0;
        for (int i = 0; i < n/2; i++){
            if (s[i] != s[n-1-i]){
                l = i; r = n-1-i;
                break;
            }
        }
        string r1 = "";
        string r2 = "";

        for (int i = 0; i < n; i++){
            if (s[i] != s[l]) r1 += s[i];
            if (s[i] != s[r]) r2 += s[i];
        }
        // cout << r1 << " " << r2 << endl;

        if (!is_pal(r1) && !is_pal(r2) ){
            cout << - 1 << endl; 
            continue;
        }

        int cnt1 = 0, cnt2 = 0;

        int li = 0, ri = n-1;
        while(li < ri){ // del l;
            if (s[li] != s[ri]){
                if (s[li] == s[l]){
                    cnt1 ++;
                    li ++;
                }
                else{
                    cnt1 ++;
                    ri --;
                }
            }
            else{
                ri --;
                li ++;
            }
        }

        li = 0, ri = n-1;
        while(li < ri){ // del r;
            if (s[li] != s[ri]){
                if (s[li] == s[r]){
                    cnt2 ++;
                    li ++;
                }
                else{
                    cnt2 ++;
                    ri --;
                }
            }
            else{
                ri --;
                li ++;
            }
        }

        if (!is_pal(r1)) cnt1 = 1e6;
        if (!is_pal(r2)) cnt2 = 1e6;

        cout << min(cnt1,cnt2) << endl;

    }

    return 0;
}