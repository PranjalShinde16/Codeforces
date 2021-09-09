#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int c=0;
    getline(cin,str);
    int n = str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='H'||str[i]=='Q'||str[i]=='9')
            {c=c+1;}
    }
    if(c>0){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}
