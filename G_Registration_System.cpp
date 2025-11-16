#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    map <string, int> mp;
    while (t--){
        string s;
        cin >> s;
        int sz = s.size();
        if (mp[s] == 0){
            mp[s] = 1;
            cout << "OK\n";
        }
        else {

            
            cout << s<< mp[s]<< endl;
            mp[s] += 1;
            
        }
    }
    return 0;
}