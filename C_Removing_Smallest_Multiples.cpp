#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        long long ans = 0;
        for (int i = 1; i <= n;i ++){
            for (int j = 1; i*j <= n;j++){
                if(s[(i*j)-1] == '0'){
                    ans += i;
                    // cout << i << ' ';
                    // cout << ans << " ";
                    s[(i*j)-1] = '2';
                }
                else if (s[(i*j)-1] == '1') break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}