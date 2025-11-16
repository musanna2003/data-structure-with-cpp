#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    unordered_map<string , string> o_mp;
    unordered_map<string , string> n_mp;
    vector<pair<string, string>> v;
    while (t--){
        string s1,s2;
        cin >> s1 >> s2;
        o_mp[s1] = s2;
        n_mp[s2] = s2;
    }
    int count = 0;
    auto it = o_mp.begin();
    while(it != o_mp.end()){
        count ++;
        pair <string,string> p;
        if(!n_mp.count(it->first)){
            p.first = it->first;
            string st = it->second;
            while(o_mp.count(st)){
                st = o_mp[st];
            }
            p.second = st;
            v.push_back(p);
        }
        it ++;
    }
    cout << v.size() << endl;
    for (auto i : v){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}