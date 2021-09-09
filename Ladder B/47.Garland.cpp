#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    ll a[26]={0},b[26]={0};
    for(ll i=0;i<str1.length();i++){ a[str1[i]-'a']++; }
    for(ll i=0;i<str2.length();i++){ b[str2[i]-'a']++; }
    ll count=0;
    for(ll i=0;i<26;i++)
    {
        if(a[i]!=0&&b[i]!=0){ count+=min(a[i],b[i]); }
        else if(b[i]!=0&&a[i]==0){ count=-1; break; }
    }
    cout<<count;
    return 0;
}
