#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define mod 1000000
using namespace std;
int main()
{
    string str;
    cin>>str;
    ll n = str.length();
    rep(i,0,n-3)
    {
        if(str[i]==str[i+1]&&str[i+2]==str[i+3])
        {
            str.erase(i+2,1);
            n = str.length();
            i--;
        }
    }
    n = str.length();
    rep(i,0,n-2)
    {
        if(str[i]==str[i+1]&&str[i+1]==str[i+2])
        {
            str.erase(i+1,1);
            n = str.length();
            i--;
        }
    }
    cout<<str;
    return 0;
}
