#include <bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
class laptop
{
public:
    ll speed,ram,hdd,cost;
};
using namespace std;
int main()
{
    int n,min,out;
    cin>>n;
    laptop a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].speed>>a[i].ram>>a[i].hdd>>a[i].cost;
    }
    bool stat[n];
    for(int i=0;i<n;i++){stat[i] = false;}
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j].speed<a[i].speed&&a[j].ram<a[i].ram&&a[j].hdd<a[i].hdd){stat[j] = true;}
        }
    }
    for(int i=0;i<n;i++)
    {
        if(stat[i]==false)
        {
            min = a[i].cost;
            out = i;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(stat[i]==false)
        {
            if(a[i].cost<min){min = a[i].cost;out = i;}
        }
    }
    cout<<out+1;
    return 0;
}
