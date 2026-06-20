#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m;
        vector <long long> ve,vo,vv(m);
        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long val; cin >> val;
            ans += val;
            if(i%2 == 0) ve.push_back(val);
            else vo.push_back(val);
        }
        for(int i = 0; i < m; i++){
            cin >> vv[i];
            vv[i] --;
        }
        sort (ve.rbegin(),ve.rend());
        sort (vo.rbegin(),vo.rend());
        int io = 0, ie = 0;
        bool fo = 1, fe = 1;
        for (int i = 0; i < m; i++){
            if (vv[i] % 2 == 0){
                if(fe && ie < ve.size()){
                    ans -= ve[ie];
                    if(ve[ie] < 0) {
                        fe = 0;
                        ans += ve[ie];
                        if (ie == 0) ans -= ve[ie];
                    }
                    ie ++;
                }
            }
            else{
                if(fo && io < vo.size()){
                    ans -= vo[io];
                    if(vo[io] < 0) {
                        fo = 0;
                        ans += vo[io];
                        if (io == 0) ans -= vo[io];
                    }
                    io ++;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}