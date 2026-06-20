#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n,m,a,b; cin >> n >> m >> a >> b;
        long long cnt, cnt1 = 0,cnt2 = 0;
        //case 1
        long long nn = min(a,n-a+1);
        while(nn > 1){
            nn = (nn+1)/2;
            cnt1 ++;
        }
        long long mm = (m+1)/2;
        while(mm > 1){
            mm = (mm+1)/2;
            cnt1 ++;
        }

        //case 2
        long long nnn = ((n+1)/2);
        while(nnn > 1){
            nnn = (nnn+1)/2;
            cnt2 ++;
        }
        long long mmm = min(b,m-b+1);
        while(mmm > 1){
            mmm = (mmm+1)/2;
            cnt2 ++;
        }
        cnt = min(cnt1,cnt2);
        if(n > 1) cnt ++;
        if(m > 1) cnt ++;
        cout << cnt << endl;
    }

    return 0;
}