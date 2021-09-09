#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,b,n) for(ll i=b;i<n;i++)
using namespace std;
bool cmp(pair<string,int> &a,pair<string,int> &b)
{
   if(a.second!=b.second)
    {
        return a.second>b.second;
    }
    else
    {
        return a.first<b.first;
    }
}
void sort(map<string,int> prio)
{
    vector<pair<string,int>> vect;
    for(auto& x : prio)
    {
        vect.push_back(make_pair(x.first,x.second));
    }
//    for(auto& x : vect)
//    {
//        cout<<x.first<<" "<<x.second<<endl;
//    }
    sort(vect.begin(),vect.end(),cmp);
    for(auto& x : vect)
    {
        cout<<x.first<<endl;
    }
}
int main()
{
    string name;
    cin>>name;
    ll n;
    cin>>n;
    map<string,int> prio;
    while(n--)
    {
        string name1;
        cin>>name1;
        string action;
        cin>>action;
        if(action == "posted")
        {
            string name2;
            cin>>name2;
            cin>>name2;
            name2.pop_back();
            name2.pop_back();
            string object;
            cin>>object;
            if(name1==name||name2==name)
                {prio[name1]+=15; prio[name2]+=15;}
            else
                {prio[name1]+=0; prio[name2]+=0;}
        }
        else if(action == "commented")
        {
            string name2;
            cin>>name2;
            cin>>name2;
            name2.pop_back();
            name2.pop_back();
            string object;
            cin>>object;
            if(name1==name||name2==name)
                {prio[name1]+=10; prio[name2]+=10;}
            else
                {prio[name1]+=0; prio[name2]+=0;}
        }
        else if(action == "likes")
        {
            string name2;
            cin>>name2;
            name2.pop_back();
            name2.pop_back();
            string object;
            cin>>object;
            if(name1==name||name2==name)
                {prio[name1]+=5; prio[name2]+=5;}
            else
                {prio[name1]+=0; prio[name2]+=0;}
        }
    }
//    for(auto& x : prio)
//    {
//        cout<<x.first<<" "<<x.second<<endl;
//    }
    auto search = prio.find(name);
    if(search!=prio.end())
    {
        prio.erase(search);
    }
    sort(prio);
    return 0;
}
