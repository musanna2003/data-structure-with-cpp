#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin >> n;
        deque <int> d1;
        deque <int> d2;
        for (int i =0;i < n; i++){
            int val;
            cin >> val;
            d1.push_back(val);
        }

        while (!d1.empty()){
            int m = d1.front();
            d1.pop_front();
            

            if(d2.empty()){
                d2.push_back(m);
            }

            else if (d2.front() > m){
                d2.push_front(m);
            }
            else {
                d2.push_back(m);
            }
        }

        for (int i : d2){
            cout << i << " ";
        }

        cout << endl;
    }
    return 0;
}