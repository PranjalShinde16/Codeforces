#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m>n){cout<<"-1";return 0;}
    int x1;
    if(n%2==0){x1 = n/2;}
    else{x1 = n/2 + 1;}
    if(x1%m==0){cout<<x1;}
    else{int k = x1/m +1; x1 = k*m; cout<<x1;}
    return 0;
}
