#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    int test;
    cin >> test;

    for (int t = 0; t < test; t++) {
        int opt, val;
        cin >> opt >> val;

        if (opt == 0) {
            l.push_front(val);
        }
        else if (opt == 1) {
            l.push_back(val);
        }
        else if (opt == 2) {
            if (val < (int)l.size()) {
                l.erase(next(l.begin(), val));
            }
        }

        cout << "L -> ";
        for (int v : l) {
            cout << v << " ";
        }
        cout << endl;

        cout << "R -> ";
        int n = l.size();
        for (int i = n - 1; i >= 0; i--) {
            auto it = next(l.begin(), i);
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
