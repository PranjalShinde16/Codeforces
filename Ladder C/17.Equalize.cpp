#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    string a,b;
    ll n;
    cin>>n;
    cin>>a>>b;
    ll count=0;
    ll stat = 0;
    rep(i,n-1)
    {
        if(a[i]!=b[i])
        {
            if(a[i+1]==b[i]&&a[i]==b[i+1])
            {
                count++;
                a[i+1] = 1;
                a[i] = i;
                b[i] = 1;
                b[i+1] = 1;
                stat = i;
            }
            else
            {
                count++;
            }
        }
    }
    if(a[n-1]!=b[n-1]){ count++; }
    cout<<count;
    return 0;
}
