#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    if(n%2==0){
    if(k<=n/2){cout<<(k*2)-1;}
    else{cout<<(2*k)-n;}}
    else{
        if(k<=(n/2)+1){cout<<(k*2)-1;}
        else{cout<<(2*k)-n-1;}
    }
    return 0;
}
