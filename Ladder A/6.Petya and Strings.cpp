#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int ans;
    int n = str1.length();
    for (int i=0; i<n; i++)
    {
       if(str1[i]<='Z'){str1[i]=str1[i]+32;}
       if(str2[i]<='Z'){str2[i]=str2[i]+32;} 
        }
        ans = 0;
    for(int i=0;i<n;i++){
        if(str1[i]<str2[i]){ans=-1;break;}
        if(str1[i]>str2[i]){ans=1;break;}}
        cout<<ans;
    }