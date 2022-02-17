#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<pair<int,int>> vect;
    ll k = n;
    while(k--)
    {
        ll a,b;
        cin>>a>>b;
        vect.push_back(make_pair(a,b));
    }
    sort(vect.begin(),vect.end());
    ll lastdate=INT_MIN;
    for(auto& x : vect)
    {
        if(x.second>=lastdate)
        {
            lastdate = x.second;
        }
        else
        {
            lastdate = x.first;
        }
    }
    cout<<lastdate<<endl;
    return 0;
}
