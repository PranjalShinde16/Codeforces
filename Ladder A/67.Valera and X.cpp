#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    char x=a[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
           if(i==j||i==n-j-1){
            if(a[i][j]!=x){cout<<"NO";return 0;}
           }
        }
    }
    char y=a[0][1];
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j&&i!=n-j-1){
            if(a[i][j]!=y){cout<<"NO";return 0;}}
        }
    }
    if(x!=y){
    cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}
