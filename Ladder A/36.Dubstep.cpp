#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,outs;
    int k=1;
    cin>>str;
    int n = str.length();
    for(int i=0;i<n;i++)
    {
    if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
        {i=i+2;
    if(k==0){cout<<" ";k=1;}}
    else{
        cout<<str[i];
        k=0;
    }}
    return 0;
}
