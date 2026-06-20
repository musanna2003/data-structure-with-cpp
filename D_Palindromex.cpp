#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v(2*n);
        
        for (int i = 0; i < 2*n; i++){
            cin >> v[i];
        }
        int mx = 0;
        set <int> st;
        for (int i = 0; i < (2*n) -1; i++){
            if(v[i] == v[i+1]){
                int l = i,r= i+1;
                while(l >=0 && r < 2*n){
                    if(v[l] != v[r]){
                        int m = 0;
                        while (true) {
                            if (st.find(m) == st.end()) break;
                            m++;
                        }
                        i = r;
                        mx = max(mx,m);
                        st.clear();
                        break;
                    }
                    st.insert(v[l]);
                    l --; r ++;
                }
                int m = 0;
                while (true) {
                    if (st.find(m) == st.end()) break;
                    m++;
                }
                mx = max(mx,m);
                st.clear();
            }
            else if(i > 0 && v[i-1] == v[i+1]){
                int l = i-1,r= i+1;
                st.insert(v[i]);
                while(l >=0 && r < 2*n){
                    if(v[l] != v[r]){
                        int m = 0;
                        while (true) {
                            if (st.find(m) == st.end()) break;
                            m++;
                        }
                        i = r;
                        mx = max(mx,m);
                        st.clear();
                        break;
                    }
                    st.insert(v[l]);
                    l --; r ++;
                }
                int m = 0;
                while (true) {
                    if (st.find(m) == st.end()) break;
                    m++;
                }
                mx = max(mx,m);
                st.clear();
            }
        }
        cout << max(1,mx) << endl;
    }

    return 0;
}