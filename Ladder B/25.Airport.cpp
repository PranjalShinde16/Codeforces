#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll npa,npl;
    cin>>npa>>npl;
    ll a[npl],b[npl];
    for(int i=0;i<npl;i++){ cin>>a[i];b[i]=a[i]; }
    ll max,min;
    max=0;min=0;
    for(int i=0;i<npa;i++)
    {
        sort(a,a+npl);
        max+=a[npl-1];
        a[npl-1]--;
    }
    for(int i=0;i<npl;i++)
    {
        if(b[i]==0){b[i]=999999;}
    }
    for(int i=0;i<npa;i++)
    {
        sort(b,b+npl);
        min+=b[0];
        b[0]--;
        if(b[0]==0){b[0]=999999;}
    }
    cout<<max<<" "<<min;
    return 0;
}
