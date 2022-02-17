#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll findindex(ll *weight,ll n,bool* visited)
{
    ll ans = INT_MIN;
    ll index;
    for(ll i=1;i<=n;i++)
    {
        if(visited[i]==0&&weight[i]>ans)
        {
            ans = weight[i];
            index = i;
        }
    }
    return index;
}
bool findtill(bool* visited,ll n)
{
    bool ans = 0;
    for(ll i=1;i<=n;i++)
    {
        if(!visited[i])
        {
            ans = 1;
            break;
        }
    }
    return ans;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll weight[n+1];
    weight[0] = INT_MIN;
    for(ll i=1;i<=n;i++)
    {
        cin>>weight[i];
    }
    vector<int> vect[n+1];
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        vect[a].push_back(b);
        vect[b].push_back(a);
    }
    bool visited[n+1] = {0};
    bool till = 1;
    ll answer = 0;
    while(till)
    {
        ll index = findindex(weight,n,visited);
        visited[index] = 1;
        for(auto& x : vect[index])
        {
            if(!visited[x])
            {
                answer+=weight[x];
            }
        }
        till = findtill(visited,n);
    }
    cout<<answer;
    return 0;
}
