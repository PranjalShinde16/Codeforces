#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    sort(a,a+n);
    int k=0,count=1;
    for(int i=0;i<n;i++)
    {
        if(a[i+1]==a[i]){count++;}
        else{
            if(count>k){k = count;count =1;}
        }
    }
    if(n%2==0){count = (n/2) + 1;}
    else {count = (n/2) + 2;}
    if(count<=k){cout<<"NO";}
    else{cout<<"YES";}
    return 0;

}
