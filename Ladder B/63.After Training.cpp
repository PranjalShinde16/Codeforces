#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll m,n;
    cin>>n>>m;
    if(m%2==0)
    {
        ll i=0;
        while(n>0)
        {
            cout<<(m/2)-i<<endl;
            n--; if(n==0){ return 0; }
            cout<<(m/2)+1+i<<endl;
            n--; if(n==0){ return 0; }
            i++;
            if(i==(m/2)){ i=0; }
        }
    }
    else if(m%2==1)
    {
        ll i=0;
        while(n>0)
        {
            if(i==0){ cout<<(m+1)/2<<endl; n--; if(n==0){ return 0; } i++; if(i==(m+1)/2){ i=0; } }
            cout<<(m+1)/2-i<<endl;
            n--; if(n==0){ return 0; }
            cout<<(m+1)/2+i<<endl;
            n--; if(n==0){ return 0; }
            i++;
            if(i==(m+1)/2){ i=0; }
        }
    }
    return 0;
}
