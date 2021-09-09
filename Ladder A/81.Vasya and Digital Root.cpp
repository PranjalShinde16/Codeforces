#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(k==0&&n==1){cout<<"0";}
    else if(k!=0){cout<<k; for(int i=0;i<n-1;i++){cout<<"0";} }
    else{cout<<"No solution";}
}
