#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <long long > v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        long long sum = 0;
        
        priority_queue <long long> pq;
        
        for (auto val : v){
            if ( val == 0 ){
                if (!pq.empty()) {
                    sum += pq.top();
                    pq.pop();
                }
            }
            else {
                pq.push(val);
            }
        }
        
        cout << sum << endl;
    }

    return 0;
}