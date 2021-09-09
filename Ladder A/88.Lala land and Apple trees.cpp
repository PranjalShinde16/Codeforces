#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    int neg=0,pos=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].first<0){neg++;}
        else{pos++;}
    }
    if(neg==pos||neg+1==pos||pos+1==neg)
    {
        ans = 0;
        for(int i=0;i<n;i++){ans+=v[i].second;}
        cout<<ans;
        return 0;
    }
    else if(neg<pos)
    {
        ans = 0;
        for(int i=0;i<neg+neg+1;i++){ans+=v[i].second;}
        cout<<ans;
        return 0;
    }
    else
    {
        ans =0;
        for(int i=n-1;i>n-1-pos-pos-1;i--){ans+=v[i].second;}
        cout<<ans;
        return 0;
    }
}
