#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll temp=-1;
    bool b=0;
    string str,str1;
    cin>>str;
    str1=str;
    ll n=str.length();
    rep(i,n)
    {
        if((str[i]-48)%2==0){ temp=i; }
        if((str[i]-48)%2==0&&str[n-1]>str[i])
        {
            char t=str[n-1];
            str[n-1]=str[i];
            str[i]=t;
            b=1;
            break;
        }
    }
    if(b==0&&temp!=-1)
    {
        char t=str[temp];
        str[temp]=str[n-1];
        str[n-1]=t;
    }
    if(str1==str){ cout<<"-1"; }
    else if(temp==-1){ cout<<"-1"; }
    else{ cout<<str; }
    return 0;
}
