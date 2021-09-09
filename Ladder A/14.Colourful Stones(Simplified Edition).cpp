#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string s,t;
cin>>s>>t;
int count=1,k=0,a=0;
int lengtht = t.length();
while(k<lengtht){
if(t[k]==s[a]){count++; k++; a++;}
else{k++;}}
cout<<count;
}
