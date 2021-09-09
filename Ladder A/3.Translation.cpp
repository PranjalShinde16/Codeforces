#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1;
    cin>>str2;
    int n = str1.length();
    for(int i = 0;i<n/2;i++)
    {
        swap(str1[i],str1[n-1-i]);
        }
    if(str1==str2)
    {cout<<"YES";}
    else {cout<<"NO";}
}