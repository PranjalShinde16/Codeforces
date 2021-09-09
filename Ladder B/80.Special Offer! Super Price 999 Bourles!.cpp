#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
   ll p,d;
    cin>>p>>d;
   ll n1=p;
    int k=1;
    while(n1%10==9 and n1>0)
    {
        n1=n1/10;
        k++;
    }
    ll ans=p;
    n1=p;
    while(p/pow(10,k)!=0)
    {
        ll power=pow(10,k);
        n1=p-(p%power)-1;
        if(p-n1<=d)
        {
            ans=n1;
        }
        k++;
    }
    cout<<ans;
    return 0;
}
