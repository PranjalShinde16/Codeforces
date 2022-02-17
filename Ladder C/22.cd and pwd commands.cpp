#include<bits/stdc++.h>
#define ll long long
#define mod 1000000
#define rep(i,b,n) for(ll i=b;i<n;i++)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    vector<string> vect;
    while(n--)
    {
        string str;
        cin>>str;
        if(str=="pwd")
        {
            cout<<"/";
            for(auto& x : vect)
            {
                cout<<x<<"/";
            }
            cout<<endl;
        }
        else if(str=="cd")
        {
            string enter;
            cin>>enter;
            ll k = enter.size();
            vector<char> v;
            if(enter[0]=='/'){vect.clear();}
            rep(i,0,k)
            {
                if(enter[i]=='.')
                {
                    if(enter[i+1]=='.')
                    {vect.pop_back();}
                }
                else if(enter[i]=='/')
                {
                    string dummy="";
                    for(auto& x : v)
                    {
                        dummy+=x;
                    }
                    if(!dummy.empty())
                    {vect.push_back(dummy);}
                    v.clear();
                }
                else
                {
                    v.push_back(enter[i]);
                }
            }
            if(!v.empty())
            {
                string dummy ="";
                for(auto& x : v)
                {
                    dummy+=x;
                }
                if(!dummy.empty())
                {vect.push_back(dummy);}
                v.clear();
            }
        }
    }
}
