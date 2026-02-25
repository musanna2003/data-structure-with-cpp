#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    vector <long long> vn(n),vm(m),vn1,vm1,dp;
    for (int i = 0; i < n; i++){
        cin >> vn[i];
    }
    for (int i = 0; i < m ;i++){
        cin >> vm[i];
    }

    vm1= vm;
    sort(vm.begin(),vm.end());
    sort(vn.begin(),vn.end());
    map <long long,int> mp;
    int j = 0;
    for (int i = 0; i < m; i++){
        while(vm[i]>= vn[j] && j < n){
            j++;
        }
        mp[vm[i]] = j;
    }

    for (int vl : vm1){
        cout << mp[vl] << " ";
    }
    cout << endl;

    return 0;
}