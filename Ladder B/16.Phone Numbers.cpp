#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if(n==3){cout<<str;}
    else if(n==2){cout<<str;}
    else if(n%2==0)
    {
        cout<<str[0]<<str[1];
        for(int i=2;i<n;i+=2){cout<<"-"<<str[i]<<str[i+1];}
    }
    else
    {
        cout<<str[0]<<str[1]<<str[2];
        for(int i=3;i<n;i+=2){cout<<"-"<<str[i]<<str[i+1];}
    }
    return 0;
}
