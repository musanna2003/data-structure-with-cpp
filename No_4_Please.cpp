#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--){
	    int n; cin >> n;
	    int c1 = 0;
	    int c2 = 0;
	    int c3 = 0;
	    for (int i = 0; i < n; i++){
	        int val;
	        cin >> val;
	        if (val == 1) c1 ++;
	        else if (val == 2) c2++;
	        else if (val == 3) c3++;
	    }
	    
	    cout << ( min (c1,c3)) + (c2 == 0? 0 : (c2)-1 )<< endl;
	}
}