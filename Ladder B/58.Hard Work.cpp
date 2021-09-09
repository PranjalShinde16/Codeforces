#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for(ll i=0;i<n;i++)
using namespace std;
int main()
{
    fast;
    string str[3];
    rep(i,3){ cin>>str[i]; }
    ll n;
    cin>>n;
    string str2[n];
    rep(i,n){ cin>>str2[i]; }
    rep(i,3)
    {
        str[i].erase(remove(str[i].begin(),str[i].end(),'-'),str[i].end());
        str[i].erase(remove(str[i].begin(),str[i].end(),'_'),str[i].end());
        str[i].erase(remove(str[i].begin(),str[i].end(),';'),str[i].end());
        transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
    }
    rep(i,n)
    {
        transform(str2[i].begin(), str2[i].end(), str2[i].begin(), ::tolower);
        str2[i].erase(remove(str2[i].begin(),str2[i].end(),'-'),str2[i].end());
        str2[i].erase(remove(str2[i].begin(),str2[i].end(),'_'),str2[i].end());
        str2[i].erase(remove(str2[i].begin(),str2[i].end(),';'),str2[i].end());
    }
    //rep(i,n){ cout<<str2[i]<<endl; }
    string str3[6];
    str3[0]=str[0]+str[1]+str[2];
    str3[1]=str[1]+str[0]+str[2];
    str3[2]=str[0]+str[2]+str[1];
    str3[3]=str[2]+str[0]+str[1];
    str3[4]=str[2]+str[1]+str[0];
    str3[5]=str[1]+str[2]+str[0];
    rep(i,n)
    {
        if(str2[i]==str3[0]){ cout<<"ACC"<<endl; }
        else if(str2[i]==str3[1]){ cout<<"ACC"<<endl; }
        else if(str2[i]==str3[2]){ cout<<"ACC"<<endl; }
        else if(str2[i]==str3[3]){ cout<<"ACC"<<endl; }
        else if(str2[i]==str3[4]){ cout<<"ACC"<<endl; }
        else if(str2[i]==str3[5]){ cout<<"ACC"<<endl; }
        else { cout<<"WA"<<endl; }
    }
    return 0;
}
