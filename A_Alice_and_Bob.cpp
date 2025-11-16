#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        long long a;
        cin >> n >> a;
        vector <long long> v;
        for (int i = 0; i < n ; i ++){
           long long val;
           cin >> val;
           v.push_back(val);  
        }
        int less = 0;
        int more = 0;
        for (int i = 0; i < n ; i ++){
            if (v[i] < a) less ++;
            if (v[i] > a) more ++;
        }

        if (more > less) cout << a + 1 << endl;
        else cout << a - 1 << endl;
    }
}