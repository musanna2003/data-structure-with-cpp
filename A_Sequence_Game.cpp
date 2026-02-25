#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--){
	    int n;
        cin >> n;
        vector <long long> v;
        for (int i = 0; i < n ; i ++){
            long long val;
            cin >> val;
            v.push_back(val);
        }

        long long k;
        cin >> k;
        if (n == 1){
            if (v[0] == k) cout << "YES \n";
            else cout << "NO \n";
            continue;
        }
        int f= 0;
        for (int i = 1; i < n; i ++){
            if (min(v[i-1],v[i]) <= k && max(v[i-1],v[i]) >= k ){
                f = 1;
                break;
            }
        }
	    if (!f) cout << "NO \n";
        else cout << "YES \n";
	}
}