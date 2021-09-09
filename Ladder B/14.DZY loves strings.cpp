#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string str;
    char b;
    cin>>str;
    ll n,k,num,max;
    n = str.length();
    cin>>k;
    ll a[26];
    for(int i=0;i<26;i++){cin>>a[i];}
    num = 0;
    max = a[0];
    for(int i=0;i<26;i++){ if(a[i]>max){max=a[i];num = i;} }
    b = num + 97;
    for(int i=0;i<k;i++)
    {
        str = str + b;
    }
    n = str.length();
    num = 0;
    for(int i=0;i<n;i++)
    {
        b = str[i];
        k = b - 97;
        num = num + ((i+1)*a[k]);
    }
    cout<<num;
    return 0;
}
