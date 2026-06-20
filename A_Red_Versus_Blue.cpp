#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,a,b; cin >> n >> a >> b;
        string s = "";

        int ln = a / (b + 1);

        int ex = a % (b + 1);

        for (int i = 0 ; i <= b; i ++){
            for (int j = 0; j < ln; j++) s += "R";
            if(ex){
                s += "R";
                ex--;
            }
            if(i != b) s += "B";
        }
        cout << s << endl;

    }

    return 0;
}