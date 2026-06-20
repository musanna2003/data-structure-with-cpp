#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long h,w,a,b; cin >> h >> w >> a >> b;
        long long x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;

        if (max(x1,x2) - min(x1,x2)  == a || max(y1,y2) - min(y1,y2) == b) cout << "Yes" << endl;
        else if (max(x1,x2) - min(x1,x2) - a > 0 && (max(x1,x2) - min(x1,x2) - a)%a == 0) cout << "Yes" << endl;
        else if (max(y1,y2) - min(y1,y2) - b > 0 && (max(y1,y2) - min(y1,y2) - b)%b == 0) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}