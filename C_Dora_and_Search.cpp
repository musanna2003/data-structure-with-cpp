#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> v (n);
        priority_queue <int> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;
        for (int i = 0; i < n; i ++){
            cin >> v[i];
            pq1.push(v[i]);
            pq2.push(v[i]);
        }
        int l = 0 , r = n-1;
        bool f = 0;
        while(1){
            if (v[l] != pq1.top() && v[l] != pq2.top() && v[r] != pq1.top() && v[r] != pq2.top()){
                cout << l+1 << " " << r + 1 << endl;
                break;
            }
            else if (v[l] == pq1.top() || v[l] == pq2.top()){
                if (v[l] == pq1.top()) pq1.pop();
                else pq2.pop();
                l ++;
            }

            else if (v[r] == pq1.top() || v[r] == pq2.top()){
                if (v[r] == pq1.top()) pq1.pop();
                else pq2.pop();
                r --;
            }
            if(r<=l) {
                f = 1;
                break;
            }
        }
        if (f) cout << -1 << endl; 
    }

    return 0;
}