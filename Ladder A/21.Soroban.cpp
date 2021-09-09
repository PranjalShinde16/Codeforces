#include<bits/stdc++.h>
using namespace std;
int main()
{
string n;
cin>>n;
int j = n.length();
for(int i=0;i<j;i++)
{   if(n[j-i-1] == '0'){cout<<"O-|-OOOO"<<endl;}
    if(n[j-i-1] == '1'){cout<<"O-|O-OOO"<<endl;}
    if(n[j-i-1] == '2'){cout<<"O-|OO-OO"<<endl;}
    if(n[j-i-1] == '3'){cout<<"O-|OOO-O"<<endl;}
    if(n[j-i-1] == '4'){cout<<"O-|OOOO-"<<endl;}
    if(n[j-i-1] == '5'){cout<<"-O|-OOOO"<<endl;}
    if(n[j-i-1] == '6'){cout<<"-O|O-OOO"<<endl;}
    if(n[j-i-1] == '7'){cout<<"-O|OO-OO"<<endl;}
    if(n[j-i-1] == '8'){cout<<"-O|OOO-O"<<endl;}
    if(n[j-i-1] == '9'){cout<<"-O|OOOO-"<<endl;}
    }
    return 0;}

