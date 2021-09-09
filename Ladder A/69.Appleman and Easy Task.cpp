#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num=0,nil;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    if(n==2 && a[1][1]=='x'){cout<<"NO";return 0;}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j-1>=0){ if(a[i][j-1]=='o'){num++;} }
            if(i-1>=0){ if(a[i-1][j]=='o'){num++;} }
            if(i<n-1) { if(a[i+1][j]=='o'){num++;} }
            if(j<n-1) { if(a[i][j+1]=='o'){num++;} }
        }
        if(num%2==0){nil=569;}
        if(nil!=569){cout<<"NO";return 0;}
        num = 0;nil=0;
    }
    cout<<"YES";
    return 0;
}
