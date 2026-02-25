#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    set <int > st;
    while (t--) {
        int q,v;
        cin >> q >> v;
        if (q == 1){
            st.insert(v);
        }
        else if (q == 2){
            if (st.count(v)) st.erase(v);
        }
        else{
            cout << (st.count(v)? "Yes\n" : "No\n");
        }
    }

    return 0;
}