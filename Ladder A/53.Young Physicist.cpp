#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for(int i=0;i<n;i++){
        sum = sum + a[i][0];
    }
    if(sum==0){
    for(int i=0;i<n;i++){
        sum = sum + a[i][1];
    }
    if(sum==0){
            for(int i=0;i<n;i++){
        sum = sum + a[i][2];
    }
    if(sum==0){cout<<"YES";}
    else{cout<<"NO";}}
    else{cout<<"NO";}}
    else{cout<<"NO";}
}
