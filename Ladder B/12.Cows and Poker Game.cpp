#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,ni=0,na=0,nf=0;
    cin>>n;
    string str;
    cin>>str;
    for(ll i=0;i<n;i++)
    {
        if(str[i]=='I'){ni++;}
        else if(str[i]=='A'){na++;}
        else if(str[i]=='F'){nf++;}
    }
    if(ni>=2){cout<<"0";}
    else if(ni==1){cout<<"1";}
    else {cout<<na;}
}
