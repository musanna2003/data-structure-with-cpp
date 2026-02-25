#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s = "";
        while (n--){
            string st; cin >> st;
            if (s.empty()) s = s + st;
            else{
                int result = (s + st).compare(st + s);

                if (result < 0)
                    s = s + st;
                else if (result >= 0)
                    s = st + s;
            }
        }
        cout << s << endl;
    }

    return 0;
}