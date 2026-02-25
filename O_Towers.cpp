#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    multiset <long long> ms;
    long long val;
    cin >> val;
    ms.insert(val);
    for (int i = 1; i < n ; i++){
        long long val;
        cin >> val;
        auto ul = ms.upper_bound(val);
        auto ll = ms.lower_bound(val);
        if (ul == ms.end() || ll == ms.end()){
            ms.insert(val);
        }
        else {
            ms.erase(ul);
            ms.insert(val);
        }
        
    }
    cout << ms.size() << endl;

    return 0;
}