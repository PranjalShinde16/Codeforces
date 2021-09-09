#include<bits/stdc++.h>
#include<string.h>
#define ll long long
using namespace std;
class words
{
public:
   string first,second;
};
int main()
{
    ll n,m;
    cin>>n>>m;
    string str[n];
    words a[m];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(str[i]==a[j].first)
            {
                int x,y;
                x = a[j].first.length();
                y = a[j].second.length();
                if(x<y){cout<<a[j].first<<" ";}
                else if(y<x){cout<<a[j].second<<" ";}
                else{cout<<a[j].first<<" ";}
                break;
            }
        }
    }
    return 0;
}
