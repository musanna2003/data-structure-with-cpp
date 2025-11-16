#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        list <long long> l;
        for ( int i = 0; i < n; i ++){
            long long val;
            cin >> val;
            l.push_back(val);
        }
        long long cost = 0;
        while (l.size()>1){
            auto it = next(l.begin(), 1);
            if (max(l.front(),*it) < max(l.front(),l.back())){
                cost += max(l.front(),*it);
                l.front() = max(l.front(),*it);
                l.erase(it);
            }
            else {
                cost += max(l.front(),l.back());
                l.front() = max(l.front(),l.back());
                l.pop_back();
            }
        }
        cout << cost << endl;
    }
}