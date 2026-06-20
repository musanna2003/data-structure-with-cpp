#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;

        auto pp = [&](string &s){
            int j = s.size() -1 ;
            while(1){
                s[j] ++;
                if(s[j] > 'z'){
                    s[j] = 'a';
                    if(j == 0){
                        s = "a" + s;
                        break;
                    }
                    j --;
                }
                else break;
            }
        };

        auto fnd = [&](string s,string t){
            int k = t.size();
            
            for (int i = 0; i <= n-k; i++){
                bool f = 1;
                for (int j = 0; j < k; j ++){
                    if(s[i+j] != t[j]) {
                        f = 0;
                        break;
                    }
                }
                if(f) return 1;
            }
            return 0;
        };
        string r = "a";

        while(fnd(s,r)) pp(r);

        cout << r << endl;



    }

    return 0;
}