#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        vector <string> s2 = {"12","21"};
        vector <string> s3 = {"123","132","213","231","312","321"};
        vector <string> s4 = {
                                "1234","1243","1324","1342","1423","1432",
                                "2134","2143","2314","2341","2413","2431",
                                "3124","3142","3214","3241","3412","3421",
                                "4123","4132","4213","4231","4312","4321"
                            };
        string sm; cin >> sm;
        int a,b; cin >> a >> b;
        a--;b--;
        int len = sm.size(); 
        int x = 0;
        for (int i = 0 ; i < len; i++){
            if (len == 2){
                if (s2[a][i] == s2[b][i] ) x ++;
            }
            else if (len == 3){
                if (s3[a][i] == s3[b][i] ) x ++;
            }
            else{
                if (s4[a][i] == s4[b][i] ) x ++;
            }
        }
        cout << x << "A" << len-x << "B" << endl;
    }

    return 0;
}