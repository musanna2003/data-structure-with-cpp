#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int > v;
        for (int i = 0; i < n; i++){
            int val;
            cin >> val;
            v.push_back(val);
        }

        sort(v.begin(),v.end());
        bool f = 1;
        for (int i = 1; i < n; i += 2){
            if(i+1 < n && v[i] != v[i+1]){
                f = 0;
            }
        }
        cout << (f? "YES\n":"NO\n");
    }
}