#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,m; cin >> n >> k >> m;
    int arr[200002] = {0};
    for (int i = 0; i < n; i++){
        int a,b; cin >> a >> b;
        arr[a] ++;
        arr[b+1] --;
    }
    int s = 0;
    for (int i = 0; i < 200002; i++){
        s += arr[i];
        if (s >= k) arr[i] = 1;
        else arr[i] = 0;
    }
    int ms = 0;
    for (int i = 0; i < 200002; i++){
        ms += arr[i];
        arr[i] = ms;
    }
    while (m--){
        int x,y; cin >> x >> y;
        cout << abs(arr[x-1] - arr[y]) << endl;
    }

    return 0;
}