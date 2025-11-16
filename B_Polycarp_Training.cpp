#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin >> n;
    map <int,int> mp;
    for (int i = 0 ; i < n ; i++){
        int val;
        cin >> val;
        mp[val] ++;
    }
    
    vector <pair<int,int>> v;
    for (auto it : mp){
        pair <int,int> p = {it.first, it.second};
        v.push_back(p);
    }

    int count = 0;
    int i = 0;
    while (1){
        int com = v[i].first - count;
        if (count < 0) break;
        count += min(com,v[i].second);
        i ++;
        if (i >= v.size()) break;
    }

    cout << count << endl;
}