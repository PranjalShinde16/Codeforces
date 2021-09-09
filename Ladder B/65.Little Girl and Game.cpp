#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n,count=0;
    string str;
    cin>>str;
    n=str.length();
    ll b[26]={0};
    rep(i,n)
    {
        b[str[i]-97]++;
    }
    rep(i,26)
    {
        if(b[i]%2==1){ count++; }
    }
    //cout<<count;
    if(count%2==0&&count!=0){ cout<<"Second"; }
    else{ cout<<"First"; }
    return 0;
}
