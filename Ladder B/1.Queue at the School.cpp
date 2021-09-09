#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
int main()
{
    fast;
    ll n,t;
    cin>>n>>t;
    char s[n],h[n];
    for(int i=0;i<n;i++){cin>>s[i];}
    for(int i=0;i<n;i++){h[i]=s[i];}
    while (t--)
    {
        for(int i=0;i<n;i++){s[i]=h[i];}
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                h[i]='G';
                h[i+1]='B';
            }
        }
    }
    for(int i=0;i<n;i++){cout<<h[i];}
    return 0;
}
