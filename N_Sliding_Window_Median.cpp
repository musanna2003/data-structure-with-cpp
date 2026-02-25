#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<
    pair<long long, int>,
    null_type,
    less<pair<long long, int>>,
    rb_tree_tag,
    tree_order_statistics_node_update
> ordered_set;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;
    vector <int> v(n);
    ordered_set os;
    multiset <long long> st;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if (i <k) os.insert({v[i],i});;
    }

    cout << os.find_by_order((k-1)/2)->first << " ";
    for (int i = 1; i < n-k+1; i++){
        os.insert({v[i+k-1],i+k-1});
        os.erase({v[i-1],i-1});
        cout << os.find_by_order((k-1)/2)->first << " ";
    }
    cout << endl;

    return 0;
}