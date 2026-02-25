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
        bool f = 1;
        for (int i = 0; i < n-1; i ++){
            for (int j = i+1; j < n ; j ++){
                if ((v[j] % v[i])%2==0){
                    cout << v[i] << " " << v[j] << endl;
                    f = 0;
                    break;
                }
            }
            if (!f) break;
        }
        if (f) cout << -1 << endl;
	}
}