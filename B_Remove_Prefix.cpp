#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n; 
        cin >> n;
        int m = n;
        vector <int> v;
        while (n --){
            int val ;
            cin >> val;
            v.push_back(val);
        }

        map <int,int> mp;
        int count = 0;
        for (int i = m-1; i >= 0; i --){
            if(mp.count(v[i])){
                break;
            }
            count ++;
            mp[v[i]] = 1;
        }

        cout << m - count << endl;
    }
    return 0;
}