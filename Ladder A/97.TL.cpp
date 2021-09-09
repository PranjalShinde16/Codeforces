#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    bool flag(false);
    cin>>n>>m;
    long long a[n],b[m];
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<m;i++){cin>>b[i];}
    sort(a,a+n);
    sort(b,b+m);
    if(a[n-1]<b[0])
    {
        for(int i=a[n-1];i<b[0];i++)
        {
            if((a[0]*2)<=i){cout<<i;flag= true;return 0;}
        }
        if(flag==false){cout<<"-1";}
    }
    else{cout<<"-1";}
}
