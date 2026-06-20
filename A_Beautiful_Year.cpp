#include <bits/stdc++.h>
using namespace std;

bool ok(int x) {
    string s = to_string(x);
    set<char> st;

    for (char c : s) st.insert(c);

    return st.size() == s.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (true) {
        n++;

        if (ok(n)) {
            cout << n << '\n';
            break;
        }
    }
}