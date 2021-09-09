#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long s,n;
    cin>>s>>n;
    long long a[n],b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        c[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(s<=a[i]){cout<<"NO";return 0;}
        int k;
        for(int j=0;j<n;j++)
        {
            if(c[j]==a[i]){k=j; c[j] = c[j] + 999999;break;}
        }
        s = s + b[k];
    }
    cout<<"YES";
    return 0;
}
