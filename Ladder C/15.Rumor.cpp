#include<bits/stdc++.h>
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
// solution by Pranjal_Shinde
using namespace std;
ll BFS(ll i,vector<int> add[],ll *vis,ll *arr)
{
    queue<int> que;
    que.emplace(i);
    vis[i] = 1;
    ll mini = arr[i-1];
    while(!que.empty())
    {
        ll k = que.front();
        que.pop();
        for(auto& x : add[k])
        {
            if(!vis[x])
            {
                que.emplace(x);
                vis[x] = 1;
                if(arr[x-1]<mini){ mini = arr[x-1]; }
            }
        }
    }
    return mini;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    vector<int> add[n+1];
    while(m--)
    {
        ll u,v;
        cin>>u>>v;
        add[u].push_back(v);
        add[v].push_back(u);
    }
    ll vis[n+1] = {0};
    ll sum = 0;
    for(ll i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            sum = sum + BFS(i,add,vis,arr);
        }
    }
    cout<<sum;
    return 0;
}
//#include<bits/stdc++.h>
//#define ll long long
//#define rep(i,n) for(ll i=0;i<n;i++)
//#define print(vect) for(auto& x : vect){ cout<<x<<" "; }
//// solution by Pranjal_Shinde
//using namespace std;
//void DFS(ll i,vector<int> add[],ll *vis,ll *arr,ll &mini)
//{
//    vis[i] = 1;
//    if(arr[i-1]<mini){ mini = arr[i-1]; }
//    for(auto& x : add[i])
//    {
//        if(!vis[x])
//        {
//            DFS(x,add,vis,arr,mini);
//        }
//    }
//}
//int main()
//{
//    ll n,m;
//    cin>>n>>m;
//    ll arr[n];
//    rep(i,n)
//    {
//        cin>>arr[i];
//    }
//    vector<int> add[n+1];
//    while(m--)
//    {
//        ll u,v;
//        cin>>u>>v;
//        add[u].push_back(v);
//        add[v].push_back(u);
//    }
//    ll vis[n+1] = {0};
//    ll sum = 0;
//    for(ll i=1;i<=n;i++)
//    {
//        if(!vis[i])
//        {
//            ll mini = INT_MAX;
//            DFS(i,add,vis,arr,mini);
//            sum+=mini;
//        }
//    }
//    cout<<sum;
//    return 0;
//}
