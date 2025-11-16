#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
    int x = 0;
	while (t--){
	    string s;
        cin >> s;
        if (s == "++X" || s == "X++"){
            x ++;
        }
        else {
            x --;
        }
	}
    cout << x ;
}