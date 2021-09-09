#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string str;
    cin>>str;
    if(str[0]=='@'||str[str.length()-1]=='@')
    {
        cout<<"No solution";
        return 0;
    }
    ll n = str.length();
    for(ll i=0;i<n-2;i++)
    {
        if(str[i]=='@')
        {
            if(str[i+1]=='@'||str[i+2]=='@')
            {
                cout<<"No solution"; return 0;
            }
        }
    }
    vector<char> vect;
    ll count = 0;
    for(ll i=0;i<n;i++)
    {
        if(str[i]=='@')
        {
            count++;
        }
    }
    if(count==0){ cout<<"No solution";return 0; }
    count--;
    for(ll i=0;i<n;i++)
    {
        if(str[i]!='@')
        {
            vect.push_back(str[i]);
        }
        else
        {
            vect.push_back(str[i]);
            vect.push_back(str[i+1]);
            i++;
            if(count>0){ vect.push_back(',');count--; }
        }
    }
    for(auto& x : vect)
    {
        cout<<x;
    }
}
