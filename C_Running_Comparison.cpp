#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t --){
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n ; i ++){
            cin >> arr[i];
        }
        int arr2[n];
        for (int i = 0; i < n ; i ++){
            cin >> arr2[i];
        }

        int count =0;
        for (int i = 0; i < n ; i ++){
            if (abs(arr[i]-arr2[i]) > min(arr[i],arr2[i])) count ++;
        }
        cout << n-count<< endl;
    }
    
    
    return 0;
}