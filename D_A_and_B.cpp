#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        long long al = 0,am1 = 0, am2 = 0, ar = 0;
        vector <int> v;
        for (int i = 0; i < n; i++){
            if (s[i] == 'a'){
                v.push_back(i);
            }
        }
        if (v.size() < 2 || v.size() >= n-1 ){
            cout << 0 << endl;
            continue;
        }
        int tar = v[(int)v.size()/2];
        int j = 0;
        for (int i = 0; i < tar; i ++){
            if (s[i] == 'a'){
                al += i - j;
                j ++;
            }
        }
        j = tar -1;
        for (int i = tar -1; i >= 0; i --){
            if (s[i] == 'a'){
                am1 += j - i;
                j --;
            }
        }
        j = n-1;
        for (int i = n-1; i >= tar; i --){
            if (s[i] == 'a'){
                ar += j - i;
                j --;
            }
        }
        j = tar;
        for (int i = tar; i <n; i ++){
            if (s[i] == 'a'){
                am2 += i - j;
                j ++;
            }
        }
        long long ans1 = min(al+ar, am1+am2);


        vector <int> vb;
        al = 0,am1 = 0, am2 = 0, ar = 0;
        for (int i = 0; i < n; i++){
            if (s[i] == 'b'){
                vb.push_back(i);
            }
        }
        tar = vb[(int)vb.size()/2];
        j = 0;
        for (int i = 0; i < tar; i ++){
            if (s[i] == 'b'){
                al += i - j;
                j ++;
            }
        }
        j = tar -1;
        for (int i = tar -1; i >= 0; i --){
            if (s[i] == 'b'){
                am1 += j - i;
                j --;
            }
        }
        j = n-1;
        for (int i = n-1; i >= tar; i --){
            if (s[i] == 'b'){
                ar += j - i;
                j --;
            }
        }
        j = tar;
        for (int i = tar; i <n; i ++){
            if (s[i] == 'b'){
                am2 += i - j;
                j ++;
            }
        }
        long long ans2 = min(al+ar, am1+am2);

        cout << min(ans1,ans2) << endl;
    }

    return 0;
}