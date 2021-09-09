#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    if(m-n == 0){cout<<"-1";}
    else if(m-n == 1){cout<<"-1";}
    else if(m-n == 2&&m%2!=0){cout<<"-1";}
    else if(m-n == 2 && m%2 == 0){cout<<n<<"\t"<<n+1<<"\t"<<m;}
    else if(m-n>2)
    {
        if(n%2==0){ cout<<n<<"\t"<<n+1<<"\t"<<n+2;}
        else{ cout<<n+1<<"\t"<<n+2<<"\t"<<n+3; }
    }
    return 0;
}
