#include<bits/stdc++.h>
#define ll unsigned long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    string str=to_string(n);
    ll k=str.length();
    if(k%2==1)
    {
        k++;
        k=k/2;
        rep(i,k){cout<<"4";}
        rep(i,k){cout<<"7";}
        return 0;
    }
    else if(k%2==0)
    {
        string str2;
        k=k/2;
        rep(i,k){ str2+='4'; }
        rep(i,k){ str2+='7'; }
        if(str2>=str){cout<<str2; return 0;}
        str2.erase();
        rep(i,k){ str2+='7'; }
        rep(i,k){ str2+='4'; }
        if(str>str2)
        {
            k++;
            rep(i,k){cout<<"4";}
            rep(i,k){cout<<"7";}
            return 0;
        }
        if(str==str2){cout<<str2;return 0;}
    }
    k=n;
    while(k>0)
    {
        string str;
        str=to_string(k);
        ll m=str.length();
        bool b=0;
        ll n4=0,n7=0;
        for(ll i=0;i<m;i++)
        {
            if(str[i]=='4'){ n4++; }
            if(str[i]=='7'){ n7++; }
        }
        for(ll i=0;i<m;i++)
        {
            if(str[i]!='4'&&str[i]!='7'){ b=1; }
        }
        if(b==0&&n4==n7){ cout<<str;return 0; }
        k++;
    }
    return 0;
}
