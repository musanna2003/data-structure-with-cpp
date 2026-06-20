#include <bits/stdc++.h>
using namespace std;
long long m = 998244353;
long long fc(int n){
    long long ans = 1;
    for(int i = 2; i <= n; i++){
        ans = (ans*i) % m;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        long long way = 1,cnt = 1,cntt = 1;
        

        for (int i = 1; i < s.size(); i ++){
            if(s[i] != s[i-1]){
                cnt ++;
                way = (way *cntt) % m;
                //cout << cntt << " ";
                cntt = 1;
            }
            else cntt ++;
        }
        way = (way *cntt) % m;
        cout << s.size() - cnt << " " << (fc(s.size() - cnt) * way) % m << endl;
    }

    return 0;
}