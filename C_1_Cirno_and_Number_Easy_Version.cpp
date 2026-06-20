#include <bits/stdc++.h>
using namespace std;
long long tll(string s) {
    long long r = 0;
    for (char c : s) {
        r = r * 10 + (c - '0');
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; string s; cin >> s >> n;
        char a,b; cin >> a >> b;
        string s1 = "",s2 = "";
        int cnt = 0;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == a || s[i] == b) {
                s1 += s[i];
                s2 += s[i];
                cnt ++;
            }
            else{
                break;
            }
        }
        bool f = 1;
        if (s[0] > a && s[0] > b) {
            s1 += max(a,b);
            for (int i = 1; i < s.size(); i++){
                s1 += max(a,b);
            }
            cout << abs(tll(s) - tll(s1)) << endl;
            continue;
        }

        if (s[0] < a && s[0] < b){
            s2 += min(a,b);
            cnt ++;
            f = 0;
        }
        else if (s[0] > min(a,b) && s[0] < max(a,b)){
            s1 += min(a,b);
            s2 += max(a,b);
            cnt ++;
        }
        
        for (int i = 0; i < s.size()-cnt; i++){
            if (f){
                s2 += max(a,b);
                s1 += min(a,b);
                if (s[i] > min(a,b) && s[i] < max(a,b)){
                    f = 0;
                }
            }
            else {
                s1 += max(a,b);
                s2 += min(a,b);
            }
        }

        cout << min(abs(tll(s) - tll(s1)),abs(tll(s) - tll(s2))) << endl;
        //cout << s1 << " " << s2 << endl;
    }

    return 0;
}