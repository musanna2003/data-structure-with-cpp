#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <long long> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        int q; cin >> q;
        while (q--){
            string s;
            cin >> s;
            if (s.size()!= v.size()){
                cout << "NO" << endl;
                continue;
            }
            set <pair<char,long long>> st;
            set <char> st2;
            set <long long> st3;
            for(int i = 0; i <n ; i ++){
                st.insert({s[i],v[i]});
                st2.insert(s[i]);
                st3.insert(v[i]);
            }
            

            cout << ( st.size() == st2.size() && st.size() == st3.size() ? "YES\n" : "NO\n" );
        }
    }

    return 0;
}