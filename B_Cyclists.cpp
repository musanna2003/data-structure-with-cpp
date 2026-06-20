#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n,k,p,m; cin >> n >> k >> p >> m;
        int ref;
        vector <int> v(n);
        priority_queue<int, vector<int>, greater<int>> pq;
        queue <int> q;

        for(int i = 0; i <n; i++){
            cin >> v[i];
            if (i == (p - 1)) {
                ref = v[i];
                v[i] = -1;
            }
            if ( i < k){
                pq.push(v[i]);
            }
            else {
                q.push(v[i]);
            }
        }
        
        int cnt = 0;

        while (m > 0){

            int x = pq.top();
            pq.pop();

            // cout << x << " ";
            if (x == -1){
                m -= ref;
                if (m >= 0)
                    cnt++;
            }
            else{
                m -= x;
            }
            q.push(x);
            if(!q.empty()){
                pq.push(q.front());
                q.pop();
            }
        }
        cout << cnt << endl;
    }

    return 0;
}