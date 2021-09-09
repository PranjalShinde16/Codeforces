#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     int mod=1e9+7;
     ll x,y,z=0;
     cin>>x>>y;
     ll n;
     cin>>n;
     n%=6;
     if(n==1){ z=x; }
     else if(n==2){ z=y; }
     else if(n==3){ z=y-x; }
     else if(n==4){ z=-x; }
     else if(n==5){ z=-y; }
     else if(n==0){ z=x-y; }
     z%=1000000007;
     if(z<0){ cout<<(z+1000000007); }
     else {cout<<z;}
     return 0;
}
