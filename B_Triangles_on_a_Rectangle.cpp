#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int w,h; cin >> w >> h;
        int xn; cin >> xn;
        vector <int> vw(xn);
        for (int i = 0; i < xn; i ++){
            cin >> vw[i];
        }
        int xxn; cin >> xxn;
        vector <int> vww(xxn);
        for(int i = 0; i < xxn; i ++){
            cin >> vww[i];
        }
        int yn; cin >> yn;
        vector <int> vh(yn);
        for (int i = 0; i < yn; i ++){
            cin >> vh[i];
        }
        int yyn; cin >> yyn;
        vector <int> vhh(yyn);
        for(int i = 0; i < yyn; i ++){
            cin >> vhh[i];
        }

        cout << max(1ll*max(vh.back()-vh[0],vhh.back()-vhh.front())*w,1ll*max(vw.back()-vw[0],vww.back()-vww.front())*h) << endl;
    }

    return 0;
}