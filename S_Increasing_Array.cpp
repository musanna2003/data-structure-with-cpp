#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <long long> v;
    for(int i =0; i < n ; i ++){
        long long val;
        cin >> val;
        v.push_back(val);
    }
    long long count = 0;
    for(int i =1; i < n ; i ++){

        if (v[i-1] > v[i]){
            count = count + ((v[i-1]-v[i]));
            v[i] = v[i-1];
        }
    }
    cout << count;
    return 0;
}