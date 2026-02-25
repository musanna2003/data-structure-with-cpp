#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set <int > st;
        while (n--){
            int val; cin >> val;
            st.insert(val);
        }
        cout << st.size() << endl;
    }

    return 0;
}