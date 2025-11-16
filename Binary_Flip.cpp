#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string s;
	    cin >> s;
	    int c0 = 0;
	    int c1 = 0;
	    for ( int i = 0; i < n-1; i ++){
	        if(s[i] == '0' && s[i] == s[i+1]) c0 ++;
	        if(s[i] == '1' && s[i] == s[i+1]) c1 ++;
	    }
        if ( c0 <= c1) cout << 0 << endl;
        else cout << (((c0 - c1) +1) /2) << endl;

	}
}