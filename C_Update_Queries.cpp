#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        set <int> st;
        for (int i = 0; i < m ; i++){
            int val;
            cin >> val;
            st.insert(val);
        }
        string c;
        cin >> c;
        sort (c.begin(),c.end());
        int a = 0;
        for (int v : st){
            s[v-1] = c[a];
            a++;
        }
        cout << s << endl;
    }

    return 0;
}