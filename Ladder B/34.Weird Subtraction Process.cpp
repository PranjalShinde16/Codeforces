#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    bool m=0;
    while((a>=(b*2)||b>=(a*2))&&m==0)
    {
        if(a>b)
        {
            ll k=a/b;
            if(k==1){ cout<<a<<" "<<b; }
            else
            {
                if(k%2==0){ a=a-(k*b); }
                else{ a=a-((k-1)*b); }
            }
        }
        else if(b>a)
        {
            ll k=b/a;
            if(k==1){ cout<<a<<" "<<b; }
            else
            {
                if(k%2==0){ b=b-(k*a); }
                else{ b=b-((k-1)*a); }
            }
        }
        if(a==0||b==0){m=1;}
    }
    cout<<a<<" "<<b;
    return 0;
}
