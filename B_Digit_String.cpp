#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        int cnt = 0;

        stack <char> st;

        for (auto it : s){
            if (it == '4') cnt ++;
            else{
                if(!st.empty() && ((st.top() == '1' || st.top() == '3') && it == '2')){
                    cnt ++;
                    st.pop();
                }
                else st.push(it);
            }
        }

        cout << cnt << endl;
    }

    return 0;
}