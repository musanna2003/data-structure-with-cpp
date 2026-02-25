#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n ; i ++){
            cin >> arr[i];
        }
        long long sum =0;
        for (int i = 0; i < n ; i ++){
           sum += arr[i]; 
        }
        if (sum < n) {
            cout << "NO"<< endl;
            continue;
        }

        long long target = sum % n;

    }
    
    
    return 0;
}