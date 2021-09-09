#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int x=0,n;
cin>>n;
string str[n];
for(int i=0;i<n;i++){cin>>str[i];}
for(int i=0;i<n;i++){
    if(str[i]=="++X"||str[i]=="X++"){x++;}
    else if(str[i]=="X--"||str[i]=="--X"){x--;}
}
cout<<x;
}
