#include<bits/stdc++.h>
#define ll long long
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll stat[n];
    string name[n];
    ll taxi[n],pizza[n],girl[n];
    for(ll i=0;i<n;i++)
    {
        taxi[i]=0;pizza[i]=0;girl[i]=0;
        cin>>stat[i]>>name[i];
        string no[stat[i]];
        for(ll j=0;j<stat[i];j++){ cin>>no[j]; }
        for(ll j=0;j<stat[i];j++)
        {
            string str=no[j];
            str.erase(remove(str.begin(),str.end(),'-'),str.end());
            ll k=str.length(); ll know=3;
            bool b=0;
            for(ll z=0;z<k-1;z++)
            {
                if(str[z+1]!=str[z]){b=1;}
            }
            if(b==0){ know=1; }
            b=0;
            for(ll z=0;z<k-1;z++)
            {
                if(str[z+1]>=str[z]){b=1;}
            }
            if(b==0){ know=2; }
            if(know==1){ taxi[i]++; }
            else if(know==2){ pizza[i]++; }
            else if(know==3){ girl[i]++; }
        }
    }
//    for(ll i=0;i<n;i++)
//    {
//        cout<<taxi[i]<<" "<<pizza[i]<<" "<<girl[i];
//        cout<<endl;
//    }
    ll maxtaxi,maxpizza,maxgirl;
    maxtaxi=taxi[0];
    maxpizza=pizza[0];
    maxgirl=girl[0];
    for(ll i=0;i<n;i++)
    {
        if(taxi[i]>maxtaxi){ maxtaxi=taxi[i]; }
    }
    for(ll i=0;i<n;i++)
    {
        if(pizza[i]>maxpizza){ maxpizza=pizza[i]; }
    }
    for(ll i=0;i<n;i++)
    {
        if(girl[i]>maxgirl){ maxgirl=girl[i]; }
    }
 //   cout<<maxtaxi<<maxpizza<<maxgirl;
    ll t=0,p=0,g=0;
    cout<<"If you want to call a taxi, you should call: ";
    for(ll i=0;i<n;i++)
    {
        if(taxi[i]==maxtaxi){t++;}
        if(pizza[i]==maxpizza){p++;}
        if(girl[i]==maxgirl){g++;}
    }
    ll tt=0,tp=0,tg=0;
    for(ll i=0;i<n;i++)
    {
        if(taxi[i]==maxtaxi){cout<<name[i];tt++;if(tt==t){cout<<".";}else{cout<<", ";} }
    }
    cout<<endl;
    cout<<"If you want to order a pizza, you should call: ";
    for(ll i=0;i<n;i++)
    {
        if(pizza[i]==maxpizza){cout<<name[i];tp++;if(tp==p){cout<<".";}else{cout<<", ";} }
    }
    cout<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(ll i=0;i<n;i++)
    {
        if(girl[i]==maxgirl){cout<<name[i];tg++;if(tg==g){cout<<".";}else{cout<<", ";} }
    }
    return 0;
}
