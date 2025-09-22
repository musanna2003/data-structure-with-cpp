#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin >> n;
    long long arr[n+1] = {0};
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 2;
    for (int i = 4; i <=n ; i ++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3] + arr[i-4];
    }
    cout << arr[n];
    return 0;
}