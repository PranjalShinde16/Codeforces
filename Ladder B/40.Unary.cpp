#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    string str;
    ll size=0;
    cin>>str;
    //cout<<str;
    for(ll i=0;i<str.length();i++)
    {
        if(i!=0){size *= 16;}
        if(str[i]=='>'){ size += 8; }
        else if(str[i]=='<'){ size += 9; }
        else if(str[i]=='+'){ size += 10; }
        else if(str[i]=='-'){ size += 11; }
        else if(str[i]=='.'){ size += 12; }
        else if(str[i]==','){ size += 13; }
        else if(str[i]=='['){ size += 14; }
        else if(str[i]==']'){ size += 15; }
        size %= 1000003;
    }
    //cout<<size;
    size %= 1000003;
    cout<<size;
    return 0;
}
