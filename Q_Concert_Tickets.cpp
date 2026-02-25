#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    multiset <long long> ms;
    while (n--){
        long long val;
        cin >> val;
        ms.insert(val);
    }

    while (m--){
        long long q;
        cin >> q;
        auto lb = ms.lower_bound(q);
        auto ub = ms.upper_bound(q);
        if(ms.empty()){
            cout << -1 << endl;
        }
        else if (ub == ms.begin()){
            cout << -1 << "\n";
        }
        else if (lb == ms.end()){
            cout << *prev(ms.end()) << "\n";
            ms.erase(prev(ms.end()));
        }
        else if (lb == ub){
            cout << *(prev(lb) ) << "\n";
            ms.erase(prev(lb));
        }
        else{
            cout << *(lb) << "\n";
            ms.erase(lb);
        }
    }

    return 0;
}