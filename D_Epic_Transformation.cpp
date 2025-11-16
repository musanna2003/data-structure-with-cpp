#include <bits/stdc++.h>
using namespace std;

int main() {
	int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map <long long,int> mp;
        for (int i = 0; i < n; i++){
            long long val;
            cin >> val;
            mp[val]++;
        }
        int mx = 0;
        for (auto it : mp){
            mx = max(mx,it.second);
        }

        if(mx <= n/2){
            cout <<( n % 2 == 0 ? "0\n":"1\n" );
        }

        else{
            int rem = n-mx;
            cout << n-(rem*2) << endl;
        }
    }
}