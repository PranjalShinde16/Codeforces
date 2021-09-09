#include<bits/stdc++.h>
using namespace std;
int main()
{
string str;
cin>>str;
sort(str.begin(),str.end());
int n = str.length();
for(int i=0;i<n;i++)
{
    if(str[i] != '+'&& i != n-1){cout<<str[i]<<"+";}
    else if(str[i] != '+'){cout<<str[i];}
}
}
