#include<bits/stdc++.h>
using namespace std;
class ranklist
{
public:
    int first,second;
};
int main()
{
    int n,k,count=0;
    cin>>n>>k;
    ranklist a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].first>>a[i].second;
    }
    ranklist temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i].first>a[j].first)
            {
                temp.first = a[i].first;
                temp.second = a[i].second;
                a[i].first = a[j].first;
                a[i].second = a[j].second;
                a[j].first = temp.first;
                a[j].second = temp.second;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i].first==a[j].first&&a[i].second<a[j].second)
            {
                temp.second = a[i].second;
                a[i].second = a[j].second;
                a[j].second = temp.second;
            }
        }
    }
ranklist dummy;
dummy.first = a[k-1].first;
dummy.second = a[k-1].second;
for(int i=0;i<n;i++)
{
    if(a[i].first == dummy.first && a[i].second == dummy.second){count++;}
}
cout<<count;
return 0;
}
