#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string str;
    ll bd=0,ad=0;
    cin>>str;
    bool a=0,b=0;
    float p;
    if(str.length()<10)
    p = stof(str);
    if(p==0){ cout<<"$0.00"; return 0; }
    else if(str[0]=='-'){ a=1;str.erase(str.begin()); }
    for(ll i=0;i<str.length();i++)
    {
        if(str[i]=='.'){ b=1; }
        else if(b==0){bd++;}
        else if(b==1){ ad++; }
    }
    //cout<<bd<<endl<<ad;
    //cout<<str<<endl;
    if(bd%3==0)
    {
        if(a==1){ cout<<"("; }
        cout<<"$";
        for(ll i=0;i<bd;i++)
        {
            if(i%3==0&&i!=bd-1&&i!=0){cout<<",";}
            cout<<str[i];
        }
        cout<<".";
        for(ll i=bd+1;i<bd+3;i++)
        {
            if(ad>=2){ cout<<str[i]; }
            else if(ad==1){ cout<<str[i]<<"0";break; }
            else if(ad==0){ cout<<"00"; break;}
        }
        if(a==1){ cout<<")"; }
    }
    if(bd%3==1)
    {
        if(a==1){ cout<<"("; }
        cout<<"$";
        if(bd==1){cout<<str[0];}
        else{ cout<<str[0]<<","; }
        for(ll i=1;i<bd;i++)
        {
            if(i%3==1&&i!=bd-1&&i!=1){cout<<",";}
            cout<<str[i];
        }
        cout<<".";
        //cout<<ad;
        for(ll i=bd+1;i<bd+3;i++)
        {
            if(ad>=2){ cout<<str[i]; }
            else if(ad==1){ cout<<str[i]<<"0";break; }
            else if(ad==0){ cout<<"00"; break;}
        }
        if(a==1){ cout<<")"; }
    }
    if(bd%3==2)
    {
        if(a==1){ cout<<"("; }
        cout<<"$";
        if(bd==2){cout<<str[0]<<str[1];}
        else{ cout<<str[0]<<str[1]<<","; }
        for(ll i=2;i<bd;i++)
        {
            if(i%3==2&&i!=bd-1&&i!=2){cout<<",";}
            cout<<str[i];
        }
        cout<<".";
        for(ll i=bd+1;i<bd+3;i++)
        {
            if(ad>=2){ cout<<str[i]; }
            else if(ad==1){ cout<<str[i]<<"0";break; }
            else if(ad==0){ cout<<"00"; break;}
        }
        if(a==1){ cout<<")"; }
    }
    return 0;
}
