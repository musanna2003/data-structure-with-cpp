#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector <int> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        int m = (n - k + 1)/2;
        int em = (k + n + 1) / 2;
        set <int> st;
        for (int i = m -1 ; i < em; i++){
            st.insert(v[i]);
        }
        for (auto it : st){
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}