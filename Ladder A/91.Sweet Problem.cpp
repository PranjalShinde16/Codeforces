#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    bool aki(false);
    cin>>n;
    while(n--)
    {
        ll r,g,b,count,min,max,med;
        cin>>r>>g>>b;
        if(r<=g&&r<=b){min = r; if(g<=b){max = b;med = g;} else{max = g;med = b;}}
        if(b<=g&&b<=r){min = b; if(g<=r){max = r;med = g;} else{max = g;med = r;}}
        if(g<=r&&g<=b){min = g; if(r<=b){max = b;med = r;} else{max = r;med = b;}}
        if(max>=min+med){ count = min +med;}
        else {count = min + med + max; count = count/2;}
        cout<<count<<endl;
}
return 0;
}
