#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll d,sumtime;
    cin>>d>>sumtime;
    vector<pair<int,int>> vect;
    for(ll i=0;i<d;i++)
    {
        ll a,b;
        cin>>a>>b;
        vect.push_back(make_pair(a,b));
    }
    ll sum=0;
    for(ll i=0;i<d;i++)
    {
        sum=sum+vect[i].second;
    }
    if(sumtime>sum){cout<<"NO"; return 0;}
    sum=0;
    for(ll i=0;i<d;i++)
    {
        sum=sum+vect[i].first;
    }
    if(sumtime<sum){cout<<"NO"; return 0;}
    else
    {
        cout<<"YES"<<endl;
        ll arr[d];
        sum=0;
        for(ll i=0;i<d;i++){ arr[i]=vect[i].second; sum=sum+arr[i]; }
        if(sum>sumtime)
        {
            for(ll i=0;i<d;i++)
            {
                while((arr[i]-1)>=vect[i].first){ arr[i]--; sum--; if(sum==sumtime){for(ll i=0;i<d;i++){ cout<<arr[i]<<" "; } return 0;}}
            }
        }
        else{ for(ll i=0;i<d;i++){ cout<<arr[i]<<" "; } return 0; }
    }
}
