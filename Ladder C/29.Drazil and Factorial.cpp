#include<bits/stdc++.h>
#define ll long long
#define rep(i,b,n) for(ll i=b;i<n;i++)
#define all(v) v.begin(),v.end()
#define each(a,v) for(auto& a : v)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define print(vect) for(auto& x : vect) { cout<<x<<" "; }
/*
reverse(v.begin(),v.end());
sort(vect.begin(),vect.end());
sort(a,a+n,greater <ll>());
min({a,b,c})
*/
using namespace std;
bool cmp(pair<int, int>& a,
         pair<int, int>& b)
{
    return a.second < b.second;
}
void sortmap(map<int, int>& M)
{
    vector<pair<int, int> > A;
    for (auto& it : M) {A.push_back(it);}
    sort(A.begin(), A.end(), cmp);
}
void solve()
{
    ll n;
    cin>>n;
    string str;
    cin>>str;
    str.erase(remove(str.begin(),str.end(),'1'),str.end());
    str.erase(remove(str.begin(),str.end(),'0'),str.end());
    vector<int> vect;
    n = str.length();
    rep(i,0,n)
    {
        if(str[i]=='4')
        {
            vect.push_back(3);
            vect.push_back(2);
            vect.push_back(2);
        }
        else if(str[i]=='6')
        {
            vect.push_back(3);
            vect.push_back(5);
        }
        else if(str[i]=='8')
        {
            vect.push_back(7);
            vect.push_back(2);
            vect.push_back(2);
            vect.push_back(2);
        }
        else if(str[i]=='9')
        {
            vect.push_back(7);
            vect.push_back(3);
            vect.push_back(3);
            vect.push_back(2);
        }
        else
        {
            ll k = str[i]-48;
            //cout<<k<<endl;
            vect.push_back(k);
        }
    }
    sort(vect.begin(),vect.end(),greater<ll>());
    for(auto& x : vect)
    {
        cout<<x;
    }
    cout<<endl;
}
int main()
{
    fast;
    ll t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}



