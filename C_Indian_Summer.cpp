#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map <string, int> mp;
    for (int i =0; i < n; i ++){
        string s1,s2;
        cin >> s1 >> s2;
        mp[s1+s2] ++;
    }
    cout << mp.size();
    return 0;
}