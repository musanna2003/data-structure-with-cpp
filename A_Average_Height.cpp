#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        deque <int> dq;
        for (int i = 0; i < n; i++){
            int val; cin >> val;
            val % 2 == 0 ? dq.push_front(val):dq.push_back(val);
        }

        for (auto it : dq){
            cout << it << " ";
        }

        cout << endl;
    }

    return 0;
}