#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n,k; cin >> n >> k;
    vector <long long> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int i= 0, j = 0;
    long long sum = v[0];
    int cnt = 0;
    while (j<n || i <n) {
        if (sum == k){
            cnt ++;
            sum -= v[i];
            i ++; j ++;
            sum += v[j];
            if (j == n) break;
        }
        else if (sum < k){
            j ++;
            sum += v[j];
            if (j == n) break;
        }
        else if (i<n && sum > k){
            sum -= v[i];
            i ++;
        }
    }
    cout << cnt << endl;

    return 0;
}