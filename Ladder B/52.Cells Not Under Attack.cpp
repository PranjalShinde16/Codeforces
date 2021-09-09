#include<bits/stdc++.h>
#define ll unsigned long long
#define loop(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll m,n;
    ll count=0;
    cin>>m>>n;
    ll vert[m]={0},hor[m]={0};
    ll size_of_hor=m,size_of_vert=m;
    ll curr=m*m;
    while(n--)
    {
        ll a,b;
        cin>>a>>b;a--;b--;
        if(hor[a]==0 && vert[b]==0)
            {
                size_of_hor--;
                size_of_vert--;
                curr=curr-(size_of_hor+size_of_vert+1);
            }
            else if(hor[a]==0 && vert[b]==1)
            {
                size_of_hor--;
                curr=curr-(size_of_vert);
            }
            else if(hor[a]==1 && vert[b]==0)
            {
                size_of_vert--;
                curr=curr-(size_of_hor);
            }
        cout<<curr<<" ";
        hor[a]=1;
        vert[b]=1;
    }
    return 0;
}
