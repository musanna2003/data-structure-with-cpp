#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector <long long> v(n);
    for (int i = 0; i < n ; i++){
        cin >> v[i];
    }

    int l = -1, r = n;
    long long lc = 0, rc = 0;
    int last = 0;
    while (l<r){
        if(lc == rc ){
            l ++;
            r --;
            if (l == r){
                lc += v[l];
                r++;
                break;
            }
            else if(l >r){
                r++;
                l--;
                break;
            }
            lc += v[l];
            rc += v[r];
        }
        else if (lc > rc){
            r--;
            if (l == r){
                r ++;
                break;
            }
            rc += v[r];
        }
        else if(lc < rc){
            l++;
            if (l == r){
                l --;
                break;
            }
            lc += v[l];
        }
    }

    // if (last == 0 && l == r) {
    //     if (lc > rc) {
    //         rc += v[r];
    //         l--;
    //     }
    //     else if (lc < rc){
    //         lc += v[l];
    //         r++;
    //     }
    // }
    // else if (last == 0 && l > r){
    //     l --; r ++;
    // }
    // else if (last == 2)l--;
    // else if (last == 1) r ++;

    while (lc != rc){
        if (lc > rc){
            lc -= v[l];
            l --;
        }
        else if (lc < rc){
            rc -= v[r];
            r ++;
        }
        if (lc == 0 || rc == 0) break;
    }
    // cout << lc <<" "<< rc << endl;
    cout << min(lc ,rc) << endl;

    return 0;
}