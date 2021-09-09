#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
int main()
{
    fast;
    string str;
    int k;
    cin>>str>>k;
    int l = str.length();
    if(l%k!=0){cout<<"NO";return 0;}
    int len = l/k;
    int p=0;
    for(int j=0;j<k;j++){
            p = len*j;
    for(int i=p;i<len+p;i++)
    {
       if(str[i]!=str[len+p+p-i-1]){cout<<"NO";return 0;}
    }
    }
    cout<<"YES";
    return 0;
}
