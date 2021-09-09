#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n = str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]>='A'&&str[i]<='Z'){str[i] = str[i] +32;}
    }
    str.erase(remove(str.begin(), str.end(), 'a'), str.end());
    str.erase(remove(str.begin(), str.end(), 'e'), str.end());
    str.erase(remove(str.begin(), str.end(), 'i'), str.end());
    str.erase(remove(str.begin(), str.end(), 'o'), str.end());
    str.erase(remove(str.begin(), str.end(), 'u'), str.end());
    str.erase(remove(str.begin(), str.end(), 'y'), str.end());
    n = str.length();
    for(int i=0;i<n;i++)
    {
        cout<<"."<<str[i];
    }
    return 0;
}
