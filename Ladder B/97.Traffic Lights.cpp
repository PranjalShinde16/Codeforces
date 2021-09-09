#include<bits/stdc++.h>
#define ll long long
#define dd double
#define fast
using namespace std;
int main()
{
    dd l,d,v;
    ll g,r;
    cin>>l>>d>>v>>g>>r;
    dd t = 0;
    t+=(d/v);
    //cout<<t<<" ";
    dd wait;
    ll round = t/(g+r);
    round = round*(g+r);
    dd rp;
    rp = t - round;
    if(rp<g){ wait = 0; }
    else
    {
        wait = (g+r)-rp;
    }
    t+=wait;
    t+=(l-d)/v;
    cout<<setprecision(11)<<t;
    return 0;
}
