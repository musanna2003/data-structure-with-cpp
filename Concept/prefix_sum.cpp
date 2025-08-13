#include <bits/stdc++.h>
using namespace std;


int main () {
    int n;
    cin >> n;
    vector <int> v(n);//given array
    vector <int> v1(n);// prefix array
    int sum = 0;
    for(int i =0; i < n; i ++){
        cin >> v[i];
        sum = sum + v[i];
        v1[i] = sum;
    }
    for(int i =0; i < n; i ++){
        cout << v1[i] << " ";
    }
}