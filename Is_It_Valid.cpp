#include <bits/stdc++.h>

using namespace std;



int main()
{
    int test;
    cin >> test;
    for (int t = 0 ; t < test; t ++){
        string s;
        cin >> s;
        queue <char> q1;
        queue <char> q2;
        for (char ch : s){
            if (ch == '0' ){
                q1.push(ch);
            }
            else {
                q2.push(ch);
            }
        }
        if (q1.size() == q2.size()){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}