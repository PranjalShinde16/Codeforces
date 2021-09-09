#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll r,b,y,g;
    string gar;
    char a[4];
    cin>>gar;
    ll n=gar.length();
    for(ll i=0;i<n;i++)
    {
        if(gar[i]=='B')
        {
            b=i%4;
        }
        if(gar[i]=='Y')
        {
            y=i%4;
        }
        if(gar[i]=='G')
        {
            g=i%4;
        }
        if(gar[i]=='R')
        {
           r=i%4;
        }
    }
    a[b]='B';a[g]='G';a[y]='Y';a[r]='R';
    b=0;g=0;r=0;y=0;
    for(ll i=0;i<n;i++)
    {
       if(gar[i]=='!')
       {
           ll k=i%4;
           if(k==0){ int m=a[0]; if(m==82){r++;} else if(m==89){y++;} else if(m==66){b++;} else if(m==71){g++;} }
           else if(k==1){ int m=a[1]; if(m==82){r++;} else if(m==89){y++;} else if(m==66){b++;} else if(m==71){g++;}  }
           else if(k==2){ int m=a[2]; if(m==82){r++;} else if(m==89){y++;} else if(m==66){b++;} else if(m==71){g++;}  }
           else if(k==3){ int m=a[3]; if(m==82){r++;} else if(m==89){y++;} else if(m==66){b++;} else if(m==71){g++;}  }
       }
    }
    cout<<r<<" "<<b<<" "<<y<<" "<<g;
    return 0;
}
