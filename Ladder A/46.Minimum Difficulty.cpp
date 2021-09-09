#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    int p=0, q = a[n-1]-a[0];
    for(int i=0;i<n-1;i++){
        p = max(p,a[i+1]-a[i]);
    }
    for(int i=1;i<n-1;i++){
        q = min(q,a[i+1]-a[i-1]);
    }
    cout<<max(q,p);
}
