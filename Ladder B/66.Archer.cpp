#include<bits/stdc++.h>
#define ld long double
using namespace std;
int main()
{
    ld a,b,c,d;
    cin>>a>>b>>c>>d;
    ld p,q,r;
    p=(a/b);
    q=(1-(c/d))*(1-(a/b));
    r=p/(1-q);
    cout<<setprecision(13)<<r;
    return 0;
}
