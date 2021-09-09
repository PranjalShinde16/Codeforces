#include<iostream>
using namespace std;
int main()
{
    int n,diff,n1,n2;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        }
    diff = max(a[0],a[n-1])-min(a[0],a[n-1]);
    n1 = n;
    n2 = 1;
    for(int i=0;i<n;i++)
    { int z;
      if(i+1<n){
      z=max(a[i],a[i+1])-min(a[i],a[i+1]);
        if(z<diff)
            {diff = z;
            n1 = i+1;
            n2 = i+2;}}
        }
        cout<<n1<<endl<<n2;
    }