#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while (t--){
	    int n;
        cin >> n;
	    vector <int> v;
	    for (int i = 0 ; i < n; i ++){
	        int val;
	        cin >> val;
	        v.push_back(val);
	    }
	    sort(v.begin(),v.end(),greater<int>());
	    if(v[0] == v[1]){
	        int i = 2;
	        while (n > 2){
	           if (v[1] != v[i]){
	               swap(v[1],v[i]);
	               break;
	           }
	           i ++;
	           if (i == n-1 || i >= n) break;
	        }
	    }
	    for (int i : v){
	        cout << i << " ";
	    }
	    cout << endl;
	    
	}
}
