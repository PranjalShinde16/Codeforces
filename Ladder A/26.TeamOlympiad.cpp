#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,nprog=0,nsport=0,nmath=0,w;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){nprog=nprog+1;}
            else if(a[i]==3){nsport=nsport+1;}
            else{nmath = nmath+1;}
    }
    w=nprog;
    if(nsport<=nprog&&nsport<=nmath){w=nsport;}
    if(nmath<=nprog&&nmath<=nsport){w=nmath;}
    cout<<w<<endl;
    if(w!=0)
    {   int x=0,y=0,z=0;
        int p[nprog],q[nmath],r[nsport];
        for(int i=0;i<n;i++){
                 if(a[i]==1){p[x]=i+1;x++;}
                 else if(a[i]==2){q[y]=i+1;y++;}
                 else{r[z]=i+1;z++;}
        }
        for(int i=0;i<w;i++){
            cout<<p[i]<<"\t"<<q[i]<<"\t"<<r[i]<<endl;
        }
    }
    return 0;
}
