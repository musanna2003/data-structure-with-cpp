#include <bits/stdc++.h>

using namespace std;



int main()
{
    int m,n;
    cin >> m >> n;
    if (m!=n){
        cout << "NO";
    }
        
    else{
       int arr1[m];
       int arr2[n];
        for (int i = 0; i < m; i ++){
            int val;
            cin >> val;
            arr1[i] = val;
        }
        for (int i = 0; i < m; i ++){
            int val;
            cin >> val;
            arr2[i] = val;
        }
        int flag = 0;
        for (int i = 0; i < m; i ++){
            if (arr1[i] != arr2[m-1-i]){
                flag ++;
                break;
            }
        }
        if(flag){
            cout << "NO";
        }
        else{
            cout << "YES";
        }
    }

    return 0;
}