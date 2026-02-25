#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >> n >>m;
    set <int> st;
    st.insert(0);
    st.insert(n);
    while (m--){
        int val;
        cin >> val;
        auto ul = st.upper_bound(val);
        auto ll = prev(ul);
        cout << max(abs(*(ul)-val),abs(*(ll)-val)) << " ";
        st.insert(val);
    }

    return 0;
}