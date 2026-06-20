#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s1,s2; cin >> s1 >> s2;
        int cnt = 0;
        vector <int> v;
        for(int i = 0; i < n; i++){
            if (s1[i] == s2[i]){
                v.push_back(i);
            }
        }
        v.push_back(n);
        int nm = n - v.size() + 1;
        int pv = 0;
        bool f = 1;
        for(auto it : v){
            int cnt = 1;
            if (f){
                for (int i = it-1; i > 0; i--){
                    if (s1[i] == s1[i-1] ) cnt ++;
                    else{
                        if(cnt%2 == 1) cnt--;
                        nm -= cnt;
                        cnt = 1;
                    }
                }
                if(cnt%2 == 1) cnt--;
                nm -= cnt;
                f = 0;
                pv = it;
            }
            else{
                for (int i = pv+1; i < it-1; i++){
                    if (s1[i] == s1[i+1] ) cnt ++;
                    else{
                        if(cnt%2 == 1) cnt--;
                        nm -= cnt;
                        cnt = 1;
                    }
                }
                if(cnt%2 == 1) cnt--;
                nm -= cnt;
                pv = it;
            }
        }
        cout << nm << endl;
    }

    return 0;
}