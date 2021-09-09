#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fast
    string str,s;
    cin>>str;
    s = str;
    ll add=0;
    if(str.size()==1){cout<<"0";return 0;}
    while(s.size()>1)
    {
        ll count=0;
        for(ll i=0;i<str.size();i++)
        {
            count += (str[i]-'0');
        }
        add++;
        s = to_string(count);
        str = s;
    }
    cout<<add;
    return 0;
}
