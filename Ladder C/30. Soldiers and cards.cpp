#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define print(vect) for(auto& x : vect){cout<<x<<" ";} cout<<endl;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll k1;
    cin>>k1;
    vector<int> first;
    vector<int> dummyfirst;
    rep(i,0,k1){ ll a;cin>>a; first.push_back(a); }
    dummyfirst = first;
    ll k2;
    cin>>k2;
    vector<int> second;
    vector<int> dummysecond;
    rep(i,0,k2){ ll a;cin>>a; second.push_back(a); }
    dummysecond = second;
    bool b = 1;
    bool start = 0;
    ll count=0;
    while(count<=400000)
    {
        if(first[0]>second[0])
        {
            start = 1;
            count++;
            first.push_back(second[0]);
            first.push_back(first[0]);
            first.erase(first.begin());
            second.erase(second.begin());
            if(second.size()==0)
            {
                cout<<count<<" "<<"1"<<endl;
                return 0;
            }
        }
        else
        {
            start = 1;
            count++;
            second.push_back(first[0]);
            second.push_back(second[0]);
            first.erase(first.begin());
            second.erase(second.begin());
            if(first.size()==0)
            {
                cout<<count<<" "<<"2"<<endl;
                return 0;
            }
        }
    }
    cout<<-1<<endl;
    return 0;
}
