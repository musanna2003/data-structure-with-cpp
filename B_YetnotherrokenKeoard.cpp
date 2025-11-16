#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        deque <pair<char,int>> dq1;
        deque <pair<char,int>> dq2;
        int c = 1;
        for (char ch : s){
            
            if (ch >= 'A' && ch <= 'Z'){
                if (ch == 'B'){
                    if (!dq1.empty()) dq1.pop_back();
                }
                else {
                    pair <char,int> p = {ch,c};
                    dq1.push_back(p);
                }
            }
            else if (ch >= 'a' && ch <= 'z'){
                if (ch == 'b'){
                    if (!dq2.empty())dq2.pop_back();
                }
                else {
                    pair <char,int> p = {ch,c};
                    dq2.push_back(p);
                }
            }
            c ++;
        }

        while(!dq1.empty() || !dq2.empty()){
            if (!dq1.empty() && !dq2.empty()){
                if (dq1.front().second < dq2.front().second){
                    cout << dq1.front().first;
                    dq1.pop_front();
                }
                else{
                    cout << dq2.front().first;
                    dq2.pop_front();
                }
            }
            else if (dq1.empty()){
                cout << dq2.front().first;
                dq2.pop_front();
            }
            else if (dq2.empty()){
                cout << dq1.front().first;
                dq1.pop_front();
            }
        }

        cout << endl;
    }
    return 0;
}