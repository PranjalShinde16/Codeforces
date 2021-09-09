#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int count=0,n;
    getline(cin,s);
    n=s.length();
    for(int i=0;i<n;i++){
    if(s[i]>='a'&&s[i]<='z'){count = count + 1;}}
    for(int i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            for(int j=0;j<i;j++)
            {
                if(s[i]==s[j]&&i!=j){count=count-1;break;}
            }
        }
    }
    cout<<count;
}
