#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int n = s.size();
        vector <char> v;
        for (char ch : s){
            v.push_back(ch);
        }
        int cnt = 0;
        if (v[0] == 'u') cnt ++;
        if (v.back() == 'u') cnt ++;
        int len = 0;
        for (int i = 1; i < n-2 ; i++){
            if (v[i] == 'u' && v[i+1] == 'u'){
                len ++;
            }
            if (v[i] == 'u' && v[i+1] != 'u'){
                len ++;
                cnt += len/2;
                len = 0;
            }
            else if ( i == n-3 && v[i] == 'u'){
                len ++;
                cnt += len/2;
                len = 0;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}