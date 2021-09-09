#include<bits/stdc++.h>
using namespace std;
int main()
{
    string first,sec;
    char trump;
    int a,b;
    cin>>trump>>first>>sec;
    string str = "6789TJQKA";
    if(first[1]==sec[1]){
    for(int i=0;i<9;i++)
    {
        if(first[0]==str[i]){a=i;}
        if(sec[0]==str[i]){b=i;}
    }
    if(a>b){cout<<"YES";}
    else{cout<<"NO";}}
    else if(first[1]== trump && sec[1]!=trump){cout<<"YES";}
    else{cout<<"NO";}
}
