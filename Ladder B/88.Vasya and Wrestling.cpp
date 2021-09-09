#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<int> first;
    vector<int> second;
    ll k;
    rep(i,n)
    {
        cin>>k;
        if(k<0){ second.pb(-1*k); }
        else{ first.pb(k); }
    }
    ll sumfirst=0,sumsecond=0;
    rep(i,first.size())
    {
        sumfirst+=first[i];
    }
    rep(i,second.size())
    {
        sumsecond+=second[i];
    }
    if(sumfirst>sumsecond)
    {
        cout<<"first"; return 0;
    }
    else if(sumsecond>sumfirst)
    {
        cout<<"second"; return 0;
    }
    else
    {
        ll i = 0;
        while(i<first.size()&&i<second.size())
        {
            if(first[i]>second[i])
            {
                cout<<"first"; return 0;
            }
            else if(second[i]>first[i])
            {
                cout<<"second"; return 0;
            }
            i++;
        }
        if(first.size()!=i){ cout<<"first"; return 0; }
        if(second.size()!=i){ cout<<"second"; return 0; }
        if(k<0){ cout<<"second"; return 0; }
        else{ cout<<"first"; return 0; }
    }
}
