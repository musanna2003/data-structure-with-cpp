#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector < int > v(n);
        for (int i = 0; i < n; i ++){
            cin >>  v[i];
            if ((i>0 && i < n-1) && v[i] == -1) v[i] = 0;
        }

        if(v[0] == -1) {
            if(v[n-1]==-1){
                v[0] = 0;
                v[n-1] = 0;
            }
            else {
                v[0] = v[n-1];
            }
        }
        else if (v[n-1] == -1) {
            if(v[0]==-1){
                v[0] = 0;
                v[n-1] = 0;
            }
            else {
                v[n-1] = v[0];
            }
        }
        // int d = 0;
        // for (int i = 0; i < n-1; i ++){
        //     if(v[i]>-1 && v[i+1] >-1)d += v[i+1]-v[i];
        // }

        // if(d > -1){
        //     if(v[0] == -1 && v[n-1]== -1){
        //         v[0] = 0;
        //         v[n-1] = 0;
        //     }
        //     else{
        //         if (v[0] == -1) v[0] = v[1];
        //         if(v[n-1] == -1) v[n-1] = v[n-2];
        //     }
        // }
        
        // if(d <0){
        //     if(v[0] == -1 && v[n-1]== -1){
        //         int n1 = d;
        //         while (n1 >= 10) {
        //             n1 /= 10;
        //         }

        //         int m = v[1];
        //         while (m >= 10) {
        //             m /= 10;
        //         }

        //         if(m>n1){
        //             v[0] = (v[1]-abs(d)>-1?v[1]-abs(d)>-1:0 );
        //             v[n-1] = 0;
        //         } 
        //         else{
        //             v[n-1] = v[n-2]+abs(d);
        //             v[0] = 0;
        //         } 

        //     }
        //     else if(v[0]==-1){
        //         v[0] = (v[1]-abs(d)>-1?v[1]-abs(d)>-1:0 );
        //     }
        //     else if(v[n-1]==-1){
        //         v[n-1] = v[n-2]+abs(d);
        //     }
        // }

        int d2 = 0;
        for (int i = 0; i < n-1; i ++){
            if(v[i]>-1 && v[i+1] >-1)d2 += v[i+1]-v[i];
        }
        cout << abs(d2) <<endl; 
        for (int i = 0; i < n; i ++){
            cout << v[i] << " ";
        }
        cout << endl;
        
    }

    return 0;
}