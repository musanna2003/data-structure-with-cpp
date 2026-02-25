#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        unordered_set <char> st;
        for (char ch : st) st.insert(ch);
        if (st.size() == n) continue;
        int c = 0;
        int l = 0, r = n-1;
        while (l < r){
            if (s[l] == s[r]){
                l ++; r--;
            }
            else{
                int f=0,b=0;
                while(l != r-b && s[l]!=s[r-b]){
                    b++;
                }
                while(r != l+f && s[r]!=s[l+f]){
                    f++;
                }
                c += min(f,b);
                if (f < b){
                    l = l+f+1; r --;
                }
                else{
                    r = r-b-1; l ++;
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}