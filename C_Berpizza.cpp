#include <bits/stdc++.h>
using namespace std;

struct cmp {
    bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
        if (a.first != b.first)
            return a.first < b.first;  
        return a.second > b.second;   
    }
};

int main() {
    int t;
    cin >> t;
    queue <pair<int,int>> qu;
    priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
    map <int,int> mp;
    int cn = 1;
    for (int j = 1; j <= t; j ++){
        int q; cin >> q;
        if (q == 1){
            int val;
            cin >> val;
            pair <int ,int> p = {val,cn};
            qu.push(p);
            pq.push(p);
            cn ++;
        }
        else if( q == 2 ){
            while(!qu.empty() && mp.count(qu.front().second)){
                qu.pop();
            }
            mp[qu.front().second] ++;
            cout << qu.front().second << " ";
            qu.pop();
        }

        else if ( q == 3){
            while(!pq.empty()&& mp.count(pq.top().second)){
                pq.pop();
            }
            mp[pq.top().second] ++;
            cout << pq.top().second << " ";
            pq.pop();
        }
    }
}