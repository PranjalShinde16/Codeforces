#include<bits/stdc++.h>
using namespace std;
int main()
{
    long k,l,count = 0;
    cin>>k>>l;
    long mod;
    if(l<k){cout<<"NO";return 0;}
    while(l>k)
    {
        mod = l%k;
        if(mod != 0){cout<<"NO";return 0;}
        l = l/k;
        count ++;
    }
    if(l==k){
    cout<<"YES"<<endl<<count;}
    else{cout<<"NO";}
    return 0;
}
