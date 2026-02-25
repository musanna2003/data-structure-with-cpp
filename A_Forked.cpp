#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;

        int kx,ky; cin >> kx >> ky;
        int qx,qy; cin >> qx >> qy;

        set <pair<int,int>> st;
        
        st.insert({qx+a,qy+b});
        st.insert({qx+a,qy-b});
        st.insert({qx-a,qy+b});
        st.insert({qx-a,qy-b});
        st.insert({qx+b, qy+a});
        st.insert({qx+b, qy-a});
        st.insert({qx-b, qy+a});
        st.insert({qx-b, qy-a});
        st.insert({kx+a,ky+b});
        st.insert({kx+a,ky-b});
        st.insert({kx-a,ky+b});
        st.insert({kx-a,ky-b});
        st.insert({kx+b, ky+a});
        st.insert({kx+b, ky-a});
        st.insert({kx-b, ky+a});
        st.insert({kx-b, ky-a});


        
        cout << (a == b? 8 : 16)-(int)st.size() << endl;
        
    }

    return 0;
}