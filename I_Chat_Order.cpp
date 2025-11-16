#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int c = 1;
    map <string,int> mp;
    while (t--){
        string s;
        cin >> s;
        mp[s] = c;
        c++;
    }
    vector <pair<int,string>> v;
    for (auto it : mp){
        pair<int,string> p = {it.second,it.first};
        v.push_back(p);
    }
    sort(v.begin(), v.end(), greater<pair<int, string>>());
    for (auto it : v){
        cout << it.second << endl;
    }
    return 0;
}