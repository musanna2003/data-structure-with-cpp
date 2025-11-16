#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int test = 1;
    while (t--){
        cout << "Case " << test << ": ";
        test ++;
        int n;
        cin >> n;
        vector <long long> v;
        for (int i = 0; i < n ; i ++){
            long long val;
            cin >> val;
            v.push_back(val);
        }

        queue <long long> vl;
        stack <long long> vr;

        vl.push(0);
        vr.push(LONG_LONG_MAX);

        long long mx = 0;
        long long mn = LONG_LONG_MAX;
        for (int i = 1; i < n ; i ++){
            vl.push(max(mx,v[i-1]));
        }

        for (int i = n-2; i <= 0 ; i --){
            vr.push(min(mn,v[i+1]));
        }
        bool f = 1;
        for (int i = 0; i < n ; i ++){
            if (v[i] > vl.front() && v[i] < vr.top()){
                cout << v[i] << endl;
                f = 0;
                break;
            }
            vl.pop();
            vr.pop();
        }
        if(f) cout << "Humanity is doomed!\n";
    }
}