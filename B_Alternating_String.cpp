#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const char nl='\n';
using vi = vector<int>;
using vll = vector<long long>;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
 
        string s;
        cin>>s;
 
        int cnt=0;
        int n=s.size();
 
 
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                cnt++;
            }
        }
 
        if(cnt<=2)
        {
            cout<<"YES"<<nl;
        }
        else
        {
            cout<<"NO"<<nl;
        }
 
 
 
    }
 
 
 
 
 
 
 
}