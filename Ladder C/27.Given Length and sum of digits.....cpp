#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll m,s;
    cin>>m>>s;
    if(m==1&&s==0)
    {
        cout<<"0 0";
        return 0;
    }
    else if(s==0||s>9*m)
    {
        cout<<"-1 -1";
        return 0;
    }
    vector<int> vect(m);
    for(ll i=0;i<m;i++)
    {
        //vect[i] = min(9,s);
        if(9<s){ vect[i]=9; }
        else{ vect[i]=s; }
        s = s-vect[i];
    }
    string largest="";
    for(auto& x : vect)
    {
        largest+=to_string(x);
    }
    reverse(vect.begin(),vect.end());
    if(vect[0]==0)
    {
        ll i = 0;
        while(vect[i]==0)
        {
            i++;
        }
        vect[i]--;
        vect[0]++;
    }
    for(auto& x : vect)
    {
        cout<<x;
    }
    cout<<" "<<largest;
    return 0;
}
