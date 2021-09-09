#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool s[(ll)2e7+5];
int main()
{
    ll n,count=0;
    cin>>n;
    ll a[n],b[n];
    for(ll i =0;i<n;i++){cin>>a[i];s[a[i]]=1;}
    for(ll i =0;i<n;i++){cin>>b[i];s[b[i]]=1;}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[a[j]]^s[b[i]]){count++;cout<<"success";}
        }
    }
    if(count%2==0){cout<<"Karen";}
    else{cout<<"Koyomi";}
}
