#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long pV,pM;
    pV = max( (3*b)/10, b - ((b/250) * d));
    pM = max( (3*a)/10, a - ((a/250) * c));
    if(pM==pV){cout<<"Tie";}
    else if(pM>pV){cout<<"Misha";}
    else {cout<<"Vasya";}
    return 0;
}
