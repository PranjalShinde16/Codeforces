#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    if(n>m+1||m>((2*n)+2))
    {
        cout<<"-1"<<endl;
        return 0;
    }
    if(n>m)
    {
        while(n>0)
        {
            cout<<"0";
            if(m>0){cout<<"1"; m--;}
            n--;
        }
        return 0;
    }
    vector<int> vect;
    while(n>0)
    {
        if(m>0){vect.push_back(1);m--;}
        vect.push_back(0);
        n--;
    }
    if(m>0)
    {
        vect.push_back(1);
        m--;
    }
    string str="";
    for(auto& x : vect)
    {
        if(x==1)
        {
            str+=to_string(x);
            if(m>0){ str+=to_string(x); m--; }
        }
        else
        {
            str+=to_string(x);
        }
    }
    cout<<str;
    return 0;
}
