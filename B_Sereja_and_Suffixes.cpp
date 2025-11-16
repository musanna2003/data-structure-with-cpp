#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n;
    cin >> n >> m;
    vector < int > v;
    for(int i = 0;i < n; i ++){
        int val;
        cin >> val;
        v.push_back(val);
    }
    map <int,int> mp;
    vector<int> dp;
    for (int i = n-1;i >=0; i--){
        mp[v[i]] ++;
        dp.push_back(mp.size());
    }

    while(m--){
        int q;
        cin >> q;
        cout << dp[n-q] << endl;
    }
}