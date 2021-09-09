#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int k;
    cin>>k;
    if(k>=0){cout<<k;}
    else{
        int k1=k/10;
        int kq=k%10;
        int k2=k/100;
        k2 = k2*10;
        k2= k2+kq;
        if(k1>k2){cout<<k1;}
        else{cout<<k2;}
    }
    return 0;
}
