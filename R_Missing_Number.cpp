#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr [n] = {0};
    for (int i =0; i < n ; i ++){
        int v;
        cin >> v ;
        arr [v- 1] = 1;
    }
    for (int i =0; i < n ; i ++){
        if (!arr[i]) {
            cout << i + 1;
        }
    }
}