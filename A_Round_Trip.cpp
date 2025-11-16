#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        long long r,l,p,n;
        cin >> r >> l >> p >> n;
        string s;
        cin >> s;
        int count = 0;
        for( char ch : s){
            if (ch == '1'){
                count ++;
                r = r - p;
            }
            else if (ch == '2'){
                if (r < l){
                    count ++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}