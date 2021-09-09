#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll d,n,count=0;
    cin>>d>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        count += (d-a[i]);
    }
    count -= (d-a[n-1]);
    cout<<count;
    return 0;
}
