#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool flag(false);
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){cin>>a[i]>>b[i];}
    int noa=0,nob=0;
    for(int i=0;i<n;i++)
    {
        noa+=a[i];
        nob+=b[i];
        if((a[i]+b[i])%2==1){flag=true;}
    }
    if(noa%2==0&&nob%2==0){cout<<"0";}
    else if((noa+nob)%2==1){cout<<"-1";}
    else if((noa+nob)%2==0&&flag==true){cout<<"1";}
    else{cout<<"-1";}
    return 0;
}
