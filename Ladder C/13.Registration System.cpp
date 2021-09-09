#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define each(a,v) for(auto& a : v)
#define all(v) v.begin(),v.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    fast;
    ll q;
    cin>>q;
    map <string,int> data;
    while(q--)
    {
        string s;
        cin>>s;
        if(data[s]==0)
        {
            cout<<"OK"<<endl;
            data[s]=1;
        }
        else
        {
            cout<<s<<data[s]<<endl;
            data[s]++;
        }
    }
}
