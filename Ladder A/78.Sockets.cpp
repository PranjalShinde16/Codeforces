#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int count =0;
    if(m<=k){cout<<count;return 0;}
    else
    {
        sort(a,a+n);
        int p=m-k+1,i=n-1;
            p = p - a[i];
            i--;
            count++;
        while(p>0)
        {
            p+=1;
            p = p - a[i];
            i--;
            count++;
        }
    }
    if(count>n){cout<<"-1";}
    else{
    cout<<count;}
}
