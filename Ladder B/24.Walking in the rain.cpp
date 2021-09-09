#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    bool des[n];
    for(int i=0;i<n;i++){ cin>>a[i];b[i]=a[i];des[i]=0; }
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(b[i]==a[j])
            {
                if(des[j]==0)
                {
                    des[j]=1;
                    if(j==0){ cout<<a[j]; return 0; }
                    else if(j==n-1){ cout<<a[j]; return 0; }
                    else if(des[j+1]==1||des[j-1]==1)
                    {
                        cout<<a[j]; return 0;
                    }
                }
            }
        }
    }
    //end
}
