#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        stack <char> st;
        int cnt = 0;
        for (auto it : s){
            if(it == '(') st.push(it);
            else{
                if (st.empty()) cnt ++;
                else st.pop();
            }
        }
        cout << cnt << endl;
    }

    return 0;
}