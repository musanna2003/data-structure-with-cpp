#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n ;
        vector <long long> v;

        for (int i = 0; i < n; i ++){
            long long val;
            cin >> val;
            v.push_back(val);
        }
        int j = 2;
        int b = v[0];
        while (true){
            int a = j;
            while (b != 0) {
                long long temp = b;
                b = a % b;
                a = temp;
            }
            if (a == 1){
                break;
            }
            j ++;
        }
        cout << j << endl;
    }
    return 0;
}