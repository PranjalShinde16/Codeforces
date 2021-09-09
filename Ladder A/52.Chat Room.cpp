#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.length(),count=0,i,j;
    for(i=0;i<n;i++){
        if(str[i]=='h'){count++;break;}
    }
    for(j=i+1;j<n;j++){
        if(str[j]=='e'){count++;break;}
    }
    for(i=j+1;i<n;i++){
        if(str[i]=='l'){count++;break;}
    }
    for(j=i+1;j<n;j++){
        if(str[j]=='l'){count++;break;}
    }
    for(i=j+1;i<n;i++){
        if(str[i]=='o'){count++;break;}
    }
    if(count==5){cout<<"YES";}
    else{cout<<"NO";}
    return 0;
}
