#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int j = 0; j < t ; j ++){

	    int n;
	    cin >> n;
	    vector <int> v;
	    for ( int i = 0 ; i < n; i++){
	        int val;
	        cin >> val;
	        v.push_back(val);
	    }
	    int count = 0;
	    while (v.size() > 2){
	        int m = v.size();
	        int max = 0;
	        for ( int i = 1 ; i < m; i++){
	            if (v[max]< v[i]){
	                max = i;
	            }
	        }
	        count += min(max,(m-1)-max);
    	    v.erase(v.begin()+max);
	    }
	    cout << count << endl;
	}
}