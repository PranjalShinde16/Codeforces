#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i = 0; i < n; i++)
    {cin>>a[i];}
    int b[n];
    for(int i=0; i<n; i++)
    { b[i] = a[i].length(); }
    for(int i=0; i<n; i++)
    { if(b[i]<=10)
    { cout<<a[i]<<endl; }
    else{ 
    cout<<a[i][0]<<b[i]-2<<a[i][b[i]-1]<<endl;}}
    }