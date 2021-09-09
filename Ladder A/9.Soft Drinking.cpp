#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,drink,slice,min;
    int tbd,tbs,tbsalt,ka;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    drink = k*l;
    slice = c*d;
    tbd = drink/nl;
    tbs = slice;
    tbsalt = p/np;
    min = tbd;
    if(tbs<=tbd&&tbs<=tbsalt){min = tbs;}
    if(tbsalt<=tbd&&tbsalt<=tbs){min = tbsalt;}
    ka = min/n;
    cout<<ka;
    }