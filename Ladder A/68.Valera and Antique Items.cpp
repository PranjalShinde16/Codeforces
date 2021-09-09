#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,k=0;
    cin>>n>>v;
    int a[n],count[n];
    for(int i=0;i<n;i++)
    {
        count[i] = 0;
        cin>>a[i];
        for(int j=0;j<a[i];j++)
        {
            long long b;
            cin>>b;
            if(v>b){count[i]++;}
        }
        if(count[i]>0){k++;}
    }
    cout<<k<<endl;
    for(int i=0;i<n;i++)
    {
        if(count[i]>0){cout<<i+1<<"\t";}
    }
}
