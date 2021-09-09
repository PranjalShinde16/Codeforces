#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
string str;
cin>>str;
long long i,n,sum=0,k;
n=str.length();
for(i=0;i<n;i++){
    if(str[i]=='^'){break;}
}
for(int j=0;j<n;j++){
    if(isdigit(str[j])){k=j-i;sum = sum + (k*(str[j]-'0'));}
}
if(sum==0){cout<<"balance";}
else if(sum>0){cout<<"right";}
else{cout<<"left";}
return 0;
}
