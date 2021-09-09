#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,p=0,q=0,r=0;
    cin>>a>>b;
    for(int i=1;i<=6;i++)
    {
        int k1=max(a,i)-min(a,i);
        int k2=max(b,i)-min(b,i);
        if(k1<k2){p=p+1;}
        else if(k1==k2){q=q+1;}
        else{r=r+1;}
    }
    cout<<p<<endl<<q<<endl<<r;
    }

