#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,diff=1000;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    while(diff>0){
    sort(a,a+n);
    diff = a[n-1] - a[0];
    for(int i=0;i<n-1;i++)
    {
      if(a[i+1]>a[i])
      {
          a[i+1] = a[i+1] - a[i];
      }
    }
    }
    cout<<a[0]*n;
    return 0;
}
