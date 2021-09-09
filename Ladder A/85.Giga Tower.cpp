#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    ll n,count = 1;
    cin>>n;
    string str;
    for(int i=n+1;i<n+21;i++)
    {
        str = to_string(i);
      for(int j=0;j<10;j++)
      {
          if(str[j]=='8'){cout<<count;return 0;}
      }
      count++;
    }
}
