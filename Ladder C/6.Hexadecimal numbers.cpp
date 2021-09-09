#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    fast;
    ll n,count=0;
    cin>>n;
    ll a[513];
    a[0]=0;
    rep(i,513)
    {
        vector<string> v;
        ll k =i;
        while(k!=0)
        {
            v.push_back(to_string(k%2));
            k=k/2;
        }
        string str;
        for(auto x: v){ str = str + x;  }
        reverse(str.begin(),str.end());
        //cout<<str<<endl;
        if(i!=0){ a[i] = stoi(str); }
        //a[i] = stoi(str);
    }
    rep(i,513)
    {
        if(a[i]>n){ break; }
        count++;
    }
    cout<<count-1;
    return 0;
}
