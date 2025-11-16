#include <bits/stdc++.h>
using namespace std;

int main() {
    deque <char> st;
    string s;
    cin >> s;
    for (char c : s){
        if (c == '<'){
            if (!st.empty()){
                st.pop_back();
            }
        }
        else {
            st.push_back(c);
        }
    }

    while (!st.empty()){
        cout << st.front();
        st.pop_front();
    }
    return 0;
}