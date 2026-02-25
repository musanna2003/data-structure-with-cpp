#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }

        set <long long> st;
        for (long long seed = 2; seed < 1e18; seed *=2){
            st.clear();
            for (auto it : v){
                st.insert(it%seed);
            }
            if (st.size() == 2){
                cout << seed << endl;
                break;
            }
        }
    }

    return 0;
}